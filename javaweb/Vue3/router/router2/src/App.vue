<script setup>
  import {useRouter} from "vue-router";
  import {ref,reactive} from "vue";
  const router = useRouter();

  function goto(id,language){
    // router.push(`/showdetails/${id}/${language}`);
    router.push({path:`/showdetails/${id}/${language}`});
  }

  function goto2(qid,qlanguage){
    // router.push(`/showdetails2?id=${id}&language=${language}`);
    router.push({path:`/showdetails2`,query:{id:qid,language:qlanguage}});
  }

</script>

<template>
  <div>
    <router-link class="router" to="/showdetails/1/java">showdetalis</router-link>
    <router-link class="router" to="/">back</router-link>
    <button @click="goto(2,'python')">to</button>
    <!-- <router-link class="router" to="/showdetails2?id=3&language=cpp">showdetalis2</router-link> -->
    <router-link class="router" :to="{path:'/showdetails2',query:{id:3,language:'cpp'}}">showdetalis2</router-link>
    <button @click="goto2(4,'c')">to2</button>
    <hr>
    <router-view></router-view>
  </div>
</template>

<style scoped>
  .router,button{
    display: inline-block;
    width:100px;
    border: 1px solid black;
    color: black;
    background-color: #c76e6e;
    height: 20px;
    text-align: center;
    line-height: 20px;
  }
</style>
