<script setup>
  import {ref,reactive} from 'vue'
  //定义一些要展示到html中的数据
  let count = ref(0);

  //方法
  function add(){
    count.value++;
  }

  function dec(){
    count.value--;
  }

  function show(){
    alert(count.value);
  }
</script>

<template>
  <div>
    <button @click="dec()">-</button>
    <span v-text="count"></span>
    <button @click="add()">+</button>
    <button @click="show()">count</button>
  </div>
</template>

<style scoped>
  span{
    display: inline-block;
    width: 100px;
  }
</style>
