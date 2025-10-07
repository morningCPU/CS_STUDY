# vue3
## 1. 搭建
使用vite建立框架

## 2. 渲染
### 2.1 渲染文本
1. v-text
`<div v-text="123"></div>`
2. v-html
`<div v-html="'<h1>123 </h1>'"></div>`
+ 注意文本需要用引号括起来
### 2.2 属性渲染
使用 `v-bind`
可以简写为 `:`  
### 2.3 事件绑定
使用 `v-on`
可以简写为 `@`
### 2.4 事件的修饰符
+ `.once` 
+ `.prevent`
## 3. 响应式
+ ref
+ reactive
## 4. 条件渲染
+ `v-if`
+ `v-else`
+ `v-show`
## 5. 列表渲染
+ `v-for`
## 6. 双向绑定
+ `v-model`
## 7. 属性计算
+ `computed`
需要import
## 8. 数据监视器
+ `watch`
+ `watchEffect`
## 9. 生命周期
1. onBeforeMount
2. onMounted
3. onBeforeUpdate
4. onUpdate
## 10. 父子传参
+ 父传子用 `defineProps`
+ 子传父用 `defineEmits`
Parent
```
<script setup>
import Child from "./Child.vue"
import { ref } from "vue";

let messageForChild = ref('');
</script>

<template>
    <div>
        父组件：<input type="text" v-model="messageForChild">
        <Child :messageFromParent="messageForChild" @messageForParent="messageForChild = $event" />
    </div>
</template>

<style scoped>
input {
    margin-left: 10px;
    border: 1px pink solid;
}
</style>
```
Child
```
<script setup>
import { ref } from 'vue';
import { defineProps, defineEmits } from 'vue';
import { watch } from 'vue';

//props是只读的
let props = defineProps(
    {
        messageFromParent: String
    }
)

let emits = defineEmits(["messageForParent"])

let inputVal = ref(props.messageFromParent);

watch(() => props.messageFromParent, (newVal) => {
    inputVal.value = newVal;
})

watch(inputVal, () => {
    emits('messageForParent', inputVal.value);
})

</script>

<template>
    <div>
        子组件：<input type="text" v-model="inputVal" />
    </div>
</template>

<style scoped>
input {  
    margin-left: 10px;
    border: 1px pink solid;
}
</style>
```
## 11. router
用于实现页面跳转
### 11.1 使用步骤
1. 创建router-view的具体内容
2. 放置router-view
这是展示router的区域
```vue
<div>
    <router-view></router-view>
</div>
```
3. 放置切换链接router-link
用于切换不同的router页面
```vue
<div id="router_link_contain">
    <router-link id="router_link" to="/">home</router-link><br>
    <router-link id="router_link" to="/page1">page1</router-link><br>
    <router-link id="router_link" to="/page2">page2</router-link><br>
    <router-link id="router_link" to="/page3">page3</router-link><br>
    <router-link id="router_link" to="/page4">page4</router-link><br>
</div>
```
整体展示
```vue
<template>
    <div>
        <h1>这里是头部</h1>
        <hr>
        <div id="router_link_contain">
            <router-link id="router_link" to="/">home</router-link><br>
            <router-link id="router_link" to="/page1">page1</router-link><br>
            <router-link id="router_link" to="/page2">page2</router-link><br>
            <router-link id="router_link" to="/page3">page3</router-link><br>
            <router-link id="router_link" to="/page4">page4</router-link><br>
        </div>
        <hr>
        <div>
            <router-view></router-view>
        </div>
        <hr>

    </div>
</template>
```
4. 配置router.js文件
```javascript
import { createRouter, createWebHashHistory } from "vue-router"

import App from "../App.vue"
import page1 from "../components/page1.vue"
import page2 from "../components/page2.vue"
import page3 from "../components/page3.vue"
import page4 from "../components/page4.vue"

export const router = createRouter({
    history: createWebHashHistory(),
    routes: [
        {
            path: '/',
            component: App
        },
        {
            path: '/page1',
            component: page1
        },
        {
            path: '/page2',
            component: page2
        },
        {
            path: '/page3',
            component: page3
        },
        {
            path: '/page4',
            component: page4
        }
    ]
})
```
6. 主页面使用router.js
```javascript
import { createApp } from 'vue'
import { router } from './router/router'
import './Style.css'
import App from './App.vue'

const app = createApp(App);
app.use(router);
app.mount('#app');
```
### 11.2 使用技巧
单独展示一个页面
router.js
```javascript
import { createRouter, createWebHashHistory } from "vue-router"

import App from "../App.vue"
import page1 from "../components/page1.vue"
import page2 from "../components/page2.vue"
import page3 from "../components/page3.vue"
import page4 from "../components/page4.vue"

export const router = createRouter({
    history: createWebHashHistory(),
    routes: [
        {
            path: '/',
            // component: App
            components: {
                default: App,
                App: App
            }
        },
        {
            path: '/page1',
            // component: page1
            components: {
                default: page1,
                page1: page1
            }
        },
        {
            path: '/page2',
            // component: page2
            components: {
                default: page2,
                page2: page2
            }
        },
        {
            path: '/page3',
            // component: page3
            components: {
                default: page3,
                page3: page3
            }
        },
        {
            path: '/page4',
            // component: page4
            components: {
                default: page4,
                page4: page4
            }
        }
    ]
})
```
App.vue
```vue
<script setup>

</script>

<template>
    <div>
        <h1>这里是头部</h1>
        <hr>
        <div id="router_link_contain">
            <router-link id="router_link" to="/">home</router-link><br>
            <router-link id="router_link" to="/page1">page1</router-link><br>
            <router-link id="router_link" to="/page2">page2</router-link><br>
            <router-link id="router_link" to="/page3">page3</router-link><br>
            <router-link id="router_link" to="/page4">page4</router-link><br>
        </div>
        <hr>
        <div>
            <router-view></router-view>
        </div>
        <hr>
        <h1>下面是单独展示</h1>
        <div>
            <hr>
            123
            <router-view name="page1"></router-view>
            <hr>
            123
            <router-view name="page2"></router-view>
            <hr>
            123
            <router-view name="page3"></router-view>
            <hr>
            123
            <router-view name="page4"></router-view>
            <hr>
        </div>

    </div>
</template>

<style scoped>
h1 {
    background-color: pink;
}

#router_link {
    display: inline-block;
    width: 100px;
    text-align: center;
    border: 1px black solid;
    margin-bottom: 5px;
    background-color: rgb(184, 184, 216);
}

#router_link_contain {
    text-align: center;
}
</style>
```
### 11.3 router重定向
```
{
    path:"/page1",
    redirect:"/page2"
}
```




















