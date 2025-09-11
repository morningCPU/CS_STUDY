<script setup>
  import {useRouter} from "vue-router";
  import {ref} from "vue";
  const router = useRouter();
  let s = ref("");

  function toLink(){
    // router.push("/list");
    router.push({path:"/list"});
  }

  function goMypage(){
    router.push(s.value);
  }
</script>

<template>
  <div>
    <router-link class="router" to = "/home">Home</router-link>
    <router-link class="router" to = "/add">Add</router-link>
    <router-link class="router" to = "/list">List</router-link>
    <router-link class="router" to = "/update">Update</router-link>
    <input type="text" ><button @click="toLink">link</button>
    <input type="text" v-model="s"><button @click="goMypage">go</button>
    <hr>
    <router-view></router-view>
  </div>
</template>

<style scoped>
  .router{
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
