import { createRouter, createWebHashHistory } from "vue-router"

import App from "../App.vue"
import page1 from "../components/page1.vue"
import page2 from "../components/page2.vue"
import page3 from "../components/page3.vue"
import page4 from "../components/page4.vue"

export const router = createRouter({
    history: createWebHashHistory(),
    routes: [
        {
            path: '/',
            // component: App
            components: {
                default: App,
                App: App
            }
        },
        {
            path: '/page1',
            // component: page1
            components: {
                default: page1,
                page1: page1
            }
        },
        {
            path: '/page2',
            // component: page2
            components: {
                default: page2,
                page2: page2
            }
        },
        {
            path: '/page3',
            // component: page3
            components: {
                default: page3,
                page3: page3
            }
        },
        {
            path: '/page4',
            // component: page4
            components: {
                default: page4,
                page4: page4
            }
        }
    ]
})