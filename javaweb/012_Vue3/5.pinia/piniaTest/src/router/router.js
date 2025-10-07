import { createRouter, createWebHashHistory } from "vue-router";

import Home from "../components/Home.vue";
import List from "../components/List.vue";
import Operator from "../components/Operator.vue";

const router = createRouter({
    history: createWebHashHistory(),
    routes: [
        {
            path: "/home",
            component: Home
        },
        {
            path: "/",
            component: Home
        },
        {
            path: "/list",
            component: List
        },
        {
            path: "/operator",
            component: Operator
        }
    ]
});

export default router;