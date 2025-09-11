<script setup>
    import { defineProps } from 'vue';
    defineProps({
        images : String
    })
</script>

<template>
    <div>
        <div v-html="images"></div>
    </div>
</template>

<style scoped>

</style>