# Element Plus
组件库
官网 : https://element-plus.org/zh-CN/

## 1. 使用
1. 安装
`npm install element-plus`
2. 引入
main.js
```typeScript
import { createApp } from 'vue'
import './style.css'
import App from './App.vue'

import ElementPlus from "element-plus";
import "element-plus/dist/index.css";

const app = createApp(App);
app.use(ElementPlus);

app.mount('#app')

```