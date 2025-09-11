# Vue3
## 1. 简介
1. 用于高效开发用户界面和交互
2. 两个核心功能
+ 声明式渲染
+ 响应性
3. 渐进式

***

## 2. Vite
+ 项目搭建的脚手架,打包的工具
### 2.1 命令行使用
1. `npm create vite@latest`
+ package.json记录了现在使用的框架
2. 下载依赖
```
cd vueDemo
npm install
```
3. 测试
`npm run + ...`
+ run的内容在package.json中:
```json
"scripts": {
  "dev": "vite", //研发模式
  "build": "vite build",
  "preview": "vite preview" //预览
},
```

***

## 3. JS和TS的选择

***

## 4. 目录结构
```
+ .vscode
+ node_modules 依赖文件
+ public 公共资源
+ src
  + assets 项目中用到的静态资源
  + components 组件
  + layouts(自行创建,下面用-替代) 布局
  + pages(-) 页面级别的组件
  + plugins 插件
  + router(-) 路由
  + store(-) 状态管理
  + utils(-) 通用的工具函数
- .gitignore
- index.html 程序入口
- package.json 项目初始化文件,依赖,框架
- vite.config.js vite的配置文件
```

***

## 5. SFC
+ Single File Component (单文件组件)
页面相同的部分,单独拿出来,作为一个构建其网页的组件
Vue通过.vue文件进行管理
```vue
<style>
/* css代码 */
</style>
<script>
// js代码
</script>
<template>
<!-- html代码 -->
</template>
```

***

## 6. 文件之间的管理
index.html -> main.js -> App.vue -> self.vue

***

## 7. 样式导入方式
1. `.vue`文件的`<style></style>`中
只在当前的文件中起作用
2. 将css样式保存到独立的css文件中,哪里需要就导入
+ 在`<script></script>`中导入
`import '../style/test.css'`
+ 在`<style></style>`中导入
`@import '../style/test.css'`
+ 导入main.js中

***

## 8. 响应式入门
+ 响应式数据
在数据变化时,vue框架会将变量最新的值跟新到dom数中
+ 非响应式数据
数据变化时,不是自动跟新(vue2默认响应式,vue3需要经过ref/reactive函数处理,需要导入)
```vue
import {ref,reactive} from 'vue'
```
+ 在script中操作ref数据需要使用.value的形式进行
`count.value++`
+ 但是在template中使用ref数据不需要使用.value,直接使用就可以
`<span v-text='count'></span>`
+ setup 语法糖
`<script setup>`
加上后就不用写setup和return了








