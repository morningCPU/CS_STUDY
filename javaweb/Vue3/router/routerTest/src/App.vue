<script setup>

</script>

<template>
  <div>
    <div>
      <router-link to="/home">home</router-link>
      <router-link to="/add">add</router-link>
      <router-link to="/list">list</router-link>
      <router-link to="/update">update</router-link>
      <router-link to="/showAll">showAll</router-link>
    </div>
     <div>
        <!-- 这个标签会被替换为具体的.vue -->
        <router-view></router-view>
     </div>

     <hr>

     <div>
        <!-- 这个标签会被替换为具体的.vue -->
        <router-view name="homeView"></router-view>
     </div>

     <hr>

     <div>
        <!-- 这个标签会被替换为具体的.vue -->
        <router-view name="addView"></router-view>
     </div>

     <hr>

     <div>
        <!-- 这个标签会被替换为具体的.vue -->
        <router-view name="listView"></router-view>
     </div>

     <hr>

     <div>
        <!-- 这个标签会被替换为具体的.vue -->
        <router-view name="updateView"></router-view>
     </div>
    
  </div>
</template>

<style scoped>
  a{
    display: inline-block;
    width: 100px;
    border: 1px solid black;
    color: black;
    background-color: burlywood;
  }
</style>
