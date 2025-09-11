<script setup>

</script>

<template>
  <div>
    <router-link class="router" to="/home">Home</router-link>
    <router-link class="router" to="/list">List</router-link>
    <router-link class="router" to="/operator">Operator</router-link>
    <hr>
    <router-view></router-view>
  </div>
</template>

<style scoped>
.router {
  display: inline-block;
  width: 200px;
  height: 30px;
  line-height: 30px;
  border: 1px solid black;
  background-color: #bf8383;
  text-align: center;
  color: black;
}
</style>
