<script setup>
    import {ref,reactive} from "vue";
    let students = reactive([
        {id:1,name:"morning",age:18},
        {id:2,name:"tom",age:19},
        {id:3,name:"alise",age:20}
    ]);
</script>

<template>
    <div>
        <table>
            <thead>
                <tr><th>id</th><th>name</th><th>age</th></tr>
            </thead>
            <tbody>
                <tr v-for="i in students" :key="i.id"><th>{{i.id}}</th><th>{{i.name}}</th><th>{{i.age}}</th></tr>
            </tbody>
        </table>
    </div>
</template>

<style scoped>
    table{
        border-collapse: collapse;
    }
    th,td{
        border: 1px solid black;
    }
</style>