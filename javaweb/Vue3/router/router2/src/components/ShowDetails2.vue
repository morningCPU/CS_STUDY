<script setup>
// 接收参数
import {useRoute} from "vue-router";
import {ref,reactive,onUpdated} from "vue";
const route = useRoute();

let show = reactive({
    id : 3,
    language : "cpp"
})

onUpdated(()=>{
    show.id = route.query.id;
    show.language = route.query.language;
})

</script>

<template>
  <div>
    <h1>ShowDetalis2</h1>
    <h1>{{show.id}}:{{show.language}}</h1>
  </div>
</template>

<style scoped>
  
</style>
