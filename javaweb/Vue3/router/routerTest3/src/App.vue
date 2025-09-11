<script setup>

</script>

<template>
  <div>
    <router-link class="router" to="/home">Home</router-link>
    <router-link class="router" to="/login">Login</router-link>
    <hr>
    <router-view></router-view>
  </div>
</template>

<style scoped>
  .router{
    display: inline-block;
    width: 100px;
    border: 1px solid black;
    color: black;
    background-color: burlywood;
    text-align: center;
    height: 30px;
    line-height: 30px;
  }
</style>
