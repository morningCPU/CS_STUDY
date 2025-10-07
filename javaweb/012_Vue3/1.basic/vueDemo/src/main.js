//从vue框架中导入一个 createApp 函数
import { createApp } from 'vue'
//导入全局css样式
import './style.css'
//导入App.vue重命名为App
import App from './App.vue'

//创建App对象并绑定#app
createApp(App).mount('#app')
