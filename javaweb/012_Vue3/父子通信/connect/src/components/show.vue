<script setup>
import { defineEmits, defineProps } from 'vue';

const emits = defineEmits(["sendMessage"]);

defineProps({
    childGet: String
})

function send(event) {
    emits("sendMessage", event.target.value)
}

</script>

<template>
    <div>
        子: <input type="text" :value="childGet" @input="send">
    </div>
</template>

<style scoped></style>