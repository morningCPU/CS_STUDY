<script setup>
import { definePerson } from "../store/store";
let person = definePerson();
</script>

<template>
    <div>
        <h1>List</h1>
        userName : {{ person.username }} <br>
        age : {{ person.age }} <br>
        hobits : <br>
        <ul>
            <li v-for="(hobby, index) in person.hobbies" :key="index">{{ hobby }}</li>
        </ul>
    </div>
</template>

<style scoped></style>
