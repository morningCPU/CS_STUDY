<script setup>
    import {ref} from "vue"
    let count = ref(0);
    let adds = ()=>{
        count.value++;
    }
    let decs = ()=>{
        count.value--;
    }
    let func = (event)=>{
        let flag = confirm("确定访问吗");
        if(!flag){
            event.preventDefault();
        }
    }
</script>

<template>
    <div>
        <button @click="decs">-</button>
        <span v-text="count"></span>
        <button @click="adds">+</button>
        <button @click.once="count = 0">reset</button>
        <hr>
        <a href="http://www.baidu.com" target="_blank" @click="func">baidu</a>
    </div>
</template>

<style scoped>

</style>