# vue渲染
## 1. 插值表达式
1. 语法
`{{数据名称/函数/对象调用API}}}`
+ 插值表达式不依赖标签
+ 支持常见表达式

***

## 2. 渲染文本
+ `v-text`
+ `v-html`
vue的指令
1. v-text
不识别html
2. v-html
**注意事项**
1. 命令必须依赖标签,写在开始标签中
2. 支持模版字符串
3. 支持常见运算符和对象API

***

## 3. 属性渲染
+ `v-bind`
将数据绑定到元素的属性上
+ 可以将v-bind省略
`v-bind:color = "red"` -> `:color="red"`

***

## 4. 事件的绑定
+ `v-on`
格式:
`v-on:事件名称="函数"`
+ 可以简写为`@事件名`
+ 内联事件处理器
`<button @click="reset">reset</button>`
变为
`<button @click="count = 0">reset</button>`
把函数体写在里面

### 4.1 事件的修饰符
1. `.once` 事件只绑定一次
`<button @click.once="count = 0">reset</button>`
2. `.prevent` 阻止组件的默认行为

***

## 5. 响应式基础
将一个普通数据转换为响应式数据的方法
1. ref()
需要.value
用于单个变量
2. reactive()
无需.value
用于对象

***

## 6. 条件渲染
+ `v-if` / `v-else`
else 自动与前一个 if 匹配
```
<h1 v-if="flag">vue is awesome</h1>
<h1 v-else>yes</h1>
```
+ `v-show`
逻辑与if一样,但if是直接在dom数中移除,show使用display属性
频繁切换用show

***

## 7. 列表渲染
+ `v-for`
+ 清除 splice()
```vue
<script setup>
    import {ref,reactive} from "vue";
    let students = reactive([
        {id:1,name:"morning",age:18},
        {id:2,name:"tom",age:19},
        {id:3,name:"alise",age:20}
    ]);
</script>

<template>
    <div>
        <ul>
            <li v-for="(i,index) in students" :key="i.id">{{index}}:{{i.name}}</li>
        </ul>
    </div>
</template>

<style scoped>

</style>
```

***

## 8. 双向绑定
+ 单向绑定
响应式数据发生改变时会影响dom数,但是用户的操作如果造成页面内容的改变不会影响响应式数据
+ 双向绑定
双向影响
一般用于表单标签
**格式**
`v-model:value="数据"`(一般省略`:value`)
### 8.1 常见场景

***

## 9. 属性计算
引入 computed
`import {computed} form "vue";`
如果数据没有变化,会使用上次的数据

***

## 10. 数据监听器
+ watch
+ watchEffect
### 10.1 watch
1. 监听ref
```vue
watch(secondName,(newValue,oldValue)=>{
    consol.log(oldValue + "变为" + newValue);
})
```
2. 监听reactive
```vue
watch(()=>name.firstName,(newValue,oldValue)=>{
    consol.log(oldValue + "变为" + newValue);
})
```
或者
```vue
watch(()=>name,()=>{

},{deep:true})
```
3. 开始便执行一次更新
```vue
watch(()=>name,()=>{

},{deep:true,immediate:true})
```
### 10.2 watchEffect
+ 自动监听
```vue
watchEffect(()=>{

})
```

### 10.3 完整测试
```vue
<script setup>
import { ref,reactive,watch,watchEffect} from 'vue';

    let name = reactive({
        firstName : "Hello"
    });

    let secondName = ref("Morning");

    let fullName = ref("");

    // watch(()=>name.firstName,(newValue,oldValue)=>{
    //     console.log(oldValue + "变为" + newValue);
    //     fullName.value = name.firstName + secondName.value; 
    // });

    // watch(()=>name,()=>{
    //     fullName.value = name.firstName + secondName.value;
    // },{deep:true,immediate:true})

    // watch(secondName,(newValue,oldValue)=>{
    //     console.log(oldValue + "变为" + newValue);
    //     fullName.value = name.firstName + secondName.value;
    // },{immediate:true});

    // *******************************************************

    watchEffect(()=>{
        fullName.value = name.firstName + secondName.value;
    })

</script>

<template>
    <div>
        姓: <input type="text" v-model="name.firstName"><br>
        名: <input type="text" v-model="secondName"><br>
        姓名: {{fullName}}
    </div>
</template>

<style scoped>

</style>
```

***

## 11. 生命周期
+ onBeforeMount
+ onMounted
+ onBeforeUpdate
+ onUpdated

***

## 12. vue组件
```vue
<script setup>
    import Header from "./test12_1.vue";
    import Navigator from "./test12_2.vue";
    import Content from "./test12_3.vue";
</script>

<template>
    <div>
         <Header id="Header"></Header>
         <Navigator id="Navigator"></Navigator>
         <Content id="Content"></Content>
    </div>
</template>

<style scoped>
    #Header{
        height: 80px;
        border: 1px solid black;
    }
    #Navigator{
        width: 15%;
        height: 800px;
        border: 1px solid black;
        float: left;
    }
    #Content{
        width: 83%;
        height: 800px;
        border: 1px solid black;
        float: right;
    }
</style>
```

***

## 13. 组件传参
1. 父 -> 子
```
//发送
<Content id="Content" :message="s"></Content>

//接收
import { defineProps } from 'vue';
    defineProps({
        message : String
    })
```
2. 子 -> 父
```
//发送
import {defineEmits} from "vue";
const emits = defineEmits["sendMenu"];
function send(s){
    emits("message",s)
}
//接收
let s = ref("");
function receive(mes){
    s.value = mes;
}

<Navigator id="Navigator" @sendMenu="receiver"></Navigator>
```
3. 子 -> 父 -> 子