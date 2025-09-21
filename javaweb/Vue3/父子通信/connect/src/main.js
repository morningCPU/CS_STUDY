import { createApp } from 'vue'
import './style.css'
import App from './App.vue'
// 开启全局pinia方法
import { createPinia } from 'pinia'
let pinia = createPinia();

let app = createApp(App);
app.use(pinia);
app.mount('#app')
