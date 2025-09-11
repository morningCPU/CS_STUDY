<script setup>
import axios from "axios"
import { reactive, ref } from "vue";

let s = ref("");
let s2 = reactive({
  code: 0,
  content: ""
})

function getMes() {
  //使用 axios 发送请求
  let promise = axios({
    //设置请求参数
    method: "get",
    url: "https://api.uomg.com/api/rand.qinghua?format=json",
    params: {//"post" 用data

    }
  })

  promise.then(
    function (response) {
      console.log(response);
      //config 本次请求的配置信息
      //response响应结果对象
      //data 服务段响应回来的数据
      //status 响应状态码
      //statusText 响应状态码描述文字
      //headers 本次响应的所有响应头
      //request 本次请求发送时所使用XMLHttpRequest对象
      s.value = response.data.content;
      Object.assign(s2, response.data);
    }
  ).catch(
    function () {

    }
  )
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
