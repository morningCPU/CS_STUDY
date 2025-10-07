<script setup>
    import {ref} from 'vue';

    let flag = ref(true);

    let turns = ()=>{
        flag.value = !flag.value;
    }
</script>

<template>
    <div>
        <h1 v-if="flag">vue is awesome</h1>
        <h1 v-else>yes</h1>
        <button @click="turns">button</button>
    </div>
</template>

<style scoped>

</style>