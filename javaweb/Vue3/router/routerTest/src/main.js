import { createApp } from 'vue'
import App from './App.vue'
//配置router
import router from "./router/router"

const app = createApp(App);

app.use(router)

app.mount('#app')
