// 导入函数
import { createRouter, createWebHashHistory } from "vue-router";
// 导入.vue文件
import home from "../components/home.vue";
import add from "../components/add.vue";
import list from "../components/list.vue";
import update from "../components/update.vue";
// 创建一个router对象
const router = createRouter({
    history: createWebHashHistory(),
    // 用于定义多个不同的路径和组件之间的对应关系
    routes: [
        {
            path: "/home",
            components: {
                default: home,
                homeView: home
            }
        },
        {
            path: "/add",
            components: {
                default: add,
                addView: add
            }
        },
        {
            path: "/list",
            components: {
                default: list,
                listView: list
            }
        },
        {
            path: "/update",
            components: {
                default: update,
                updateView: update
            }
        },
        {
            path: "/",
            component: home
        },
        {
            path: "/showAll",
            redirect: "/list"
        }
    ]
});

// 向外暴露
export default router;