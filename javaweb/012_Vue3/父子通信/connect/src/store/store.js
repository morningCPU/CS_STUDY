// 定义共享数据
import { defineStore } from "pinia";
// 定义一个PersonStore
export const PersonStore = defineStore(
    "PersonPinia",
    {
        state: () => {
            return {
                userName: "morning",
                age: 18
            }
        },
        getters: {
            // 使用数据
        },
        actions: {
            // 修改数据
            decAge() {
                this.age--;
            },
            addAge() {
                this.age++;
            }
        }
    }
)