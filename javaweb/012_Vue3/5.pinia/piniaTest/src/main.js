import { createApp } from 'vue'
import App from './App.vue'
import List from './components/List.vue';
import router from "./router/router"

//开启全局的Pinia功能
import { createPinia } from "pinia";
const pinia = createPinia();

const app = createApp(App);
app.use(router);
app.use(pinia);
app.mount('#app');
