<script setup>
    import { defineEmits } from 'vue';
    let emits = defineEmits(["images"]);

    function send(mes){
        const url = new URL(`../assets/${mes}.jpg`, import.meta.url).href
        emits('images', `<img src="${url}" />`)
    }
</script>

<template>
    <div>
         <ul>
            <li @click="send('student')">学员管理</li>
            <li @click="send('books')">图书管理</li>
            <li @click="send('dayout')">请假管理</li>
            <li @click="send('exam')">考试管理</li>
            <li @click="send('teacher')">讲师管理</li>
         </ul>
    </div>
</template>

<style scoped>

</style>