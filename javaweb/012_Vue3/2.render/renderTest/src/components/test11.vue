<script setup>
    import {ref,onBeforeMount,onMounted,onBeforeUpdate,onUpdated} from "vue";

    let count = ref(0);

    onBeforeMount(()=>{
        console.log(document.getElementById("button1"));
    })

    onMounted(()=>{
        console.log(document.getElementById("button1"));
    })

    onBeforeUpdate(()=>{
        console.log(count.value + " : " + document.getElementById("span1").innerText);
    })

    onUpdated(()=>{
        console.log(count.value + " : " + document.getElementById("span1").innerText);
    })
</script>

<template>
    <div>
         <span id="span1">{{count}}</span> <button @click="count++" id="button1">add</button>
    </div>
</template>

<style scoped>

</style>