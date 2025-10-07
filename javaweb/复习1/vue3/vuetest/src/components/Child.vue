<script setup>
import { ref } from 'vue';
import { defineProps, defineEmits } from 'vue';
import { watch } from 'vue';

//props是只读的
let props = defineProps(
    {
        messageFromParent: String
    }
)

let emits = defineEmits(["messageForParent"])

let inputVal = ref(props.messageFromParent);

watch(() => props.messageFromParent, (newVal) => {
    inputVal.value = newVal;
})

watch(inputVal, () => {
    emits('messageForParent', inputVal.value);
})

</script>

<template>
    <div>
        子组件：<input type="text" v-model="inputVal" />
    </div>
</template>

<style scoped>
input {
    margin-left: 10px;
    border: 1px pink solid;
}
</style>