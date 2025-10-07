<script setup>
// 接收参数
import {useRoute} from "vue-router";
import {ref,reactive,onUpdated} from "vue";
const route = useRoute();
let show = reactive({
    id : route.params.id,
    language : route.params.language
});
onUpdated(()=>{
    show.id = route.params.id;
    show.language = route.params.language;
});

</script>

<template>
  <div>
    <h1>ShowDetalis</h1>
    <h1>{{show.id}}:{{show.language}}</h1>
  </div>
</template>

<style scoped>
  
</style>
