<script setup>
//导入pinia定义的数据
import { definePerson } from "../store/store";
import List from "./List.vue";
let person = definePerson();
</script>

<template>
    <div>
        <h1>Operator</h1>
        <p>
            userName : <input type="text" v-model="person.username"> <br>
            age : <input type="text" v-model="person.age">
            <button @click="person.addAge">add</button>
            <!-- 恢复默认值 -->
            <button @click="person.$reset">重置</button>
            <!-- 一次性修改多个属性值 -->
            <button @click="person.$patch({ username: 'tom', age: 20 })">一次性修改</button>
            <br>
            hobbits :
            <input type="checkbox" v-model="person.hobbies" value="sing">sing
            <input type="checkbox" v-model="person.hobbies" value="dance">dance
            <br>
            {{ person }}
        </p>
        <div>
            <List></List>
        </div>
    </div>
</template>

<style scoped></style>
