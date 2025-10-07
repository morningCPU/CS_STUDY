<script setup>
    import {ref,reactive} from "vue";
    let person = reactive(
        {
        name : "moring",
        age : 18
        }
    );
    let add = ()=>{
        person.age++;
    }
    let dec = ()=>{
        person.age--;
    }
    let show = ()=>{
        alter(person.age);
    }
</script>

<template>
    <div>
        <button @click="dec">-</button>
        <span>{{person.age}}</span>
        <button @click="add">+</button>
    </div>
</template>

<style scoped>
    span{
        display: inline-block;
        width: 100px;
    }
</style>