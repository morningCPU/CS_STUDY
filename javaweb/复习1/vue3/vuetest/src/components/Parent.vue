<script setup>
import Child from "./Child.vue"
import { ref } from "vue";

let messageForChild = ref('');
</script>

<template>
    <div>
        父组件：<input type="text" v-model="messageForChild">
        <Child :messageFromParent="messageForChild" @messageForParent="messageForChild = $event" />
    </div>
</template>

<style scoped>
input {
    margin-left: 10px;
    border: 1px pink solid;
}
</style>