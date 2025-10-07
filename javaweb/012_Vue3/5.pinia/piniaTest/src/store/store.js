import { defineStore } from "pinia";

//定义一个Person共享
export const definePerson = defineStore(
    "personPinia",
    {
        state: () => {
            return {
                username: "morning",
                age: 18,
                hobbies: ["sing", "dance"]
            }
        },
        getters: {//使用数据,不要修改数据
            getUserName() {
                return this.username;
            },
            getAge() {
                return this.age;
            },
            getHobbies() {
                return this.hobbies;
            }
        },
        actions: {//修改数据
            addAge() {
                this.age++;
            }
        }
    }
)