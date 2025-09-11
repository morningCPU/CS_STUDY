import { createRouter, createWebHashHistory } from "vue-router";

import Home from "../components/Home.vue";
import Login from '../components/Login.vue';

const router = createRouter({
    history: createWebHashHistory(),
    routes: [
        {
            path: "/home",
            component: Home
        },
        {
            path: "/login",
            component: Login
        },
        {
            path: "/",
            component: Home
        }
    ]
});

router.beforeEach((to, from, next) => {
    if (to.path == "/login") {
        next();
    } else {
        if (sessionStorage.getItem("user") != null) {
            next();
        } else {
            next("/login");
            alert("请先完成登录");
        }
    }
});

export default router;