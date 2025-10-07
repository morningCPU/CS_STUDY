<script setup>
import instance from "../axios"
import { reactive, ref } from "vue";

let s = ref("");
let s2 = reactive({
    code: 0,
    content: ""
})

function getWord() {
    /* axios.get(
        "https://api.uomg.com/api/rand.qinghua?format=json",
        {
            params: {},
            headers: {}
        }
    ) */
    // ************************************************************
    // //使用 axios 发送请求
    // return axios({
    //     //设置请求参数
    //     method: "post",
    //     url: "https://api.uomg.com/api/rand.qinghua?format=json",
    //     data: {//"post" 用data

    //     }
    // })
    // ************************************************************
    return instance.post(
        "https://api.uomg.com/api/rand.qinghua?format=json",
        {
            //写入请求体中的json
        },
        {
            headers: {

            }
        }
    )
}

async function getMes() {
    let { data } = await getWord();
    Object.assign(s2, data);
}

</script>

<template>
    <div>
        <h1>{{ s2.content }}</h1>
        <h1>{{ s }}</h1>
        <button @click="getMes()">change</button>
    </div>
</template>

<style scoped></style>
