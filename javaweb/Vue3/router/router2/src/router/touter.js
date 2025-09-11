import { createRouter, createWebHashHistory } from "vue-router";

import Home from "../components/Home.vue";
import List from "../components/List.vue";
import Add from "../components/Add.vue";
import Update from "../components/Update.vue";
import ShowDetails from "../components/ShowDetails.vue";
import ShowDetails2 from "../components/ShowDetails2.vue";

const router = createRouter({
    history: createWebHashHistory(),
    routes: [
        {
            path: "/home",
            component: Home
        },
        {
            path: "/add",
            component: Add
        },
        {
            path: "/list",
            component: List
        },
        {
            path: "/update",
            component: Update
        },
        {
            path: "/showdetails/:id/:language",
            component: ShowDetails
        },
        {
            path: "/showdetails2",
            component: ShowDetails2
        },
        {
            path: "/",
            component: Home
        }
    ]
})

//全局前置守卫
//to 下一个页面
//from 上一个页面
//next 放行的方法 next()放行 next("/...") 重定向
router.beforeEach((to, from, next) => {
    console.log("beforeEach");
    console.log(from.path + " -> " + to.path);
    next();
});
//全局后置守卫
router.afterEach((to, from) => {
    console.log("afterEach");
    console.log(from.path + " -> " + to.path);
})

export default router;