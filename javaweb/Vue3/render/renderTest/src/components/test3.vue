<script setup>
    const data = {
        url : "https://tse2.mm.bing.net/th/id/OIP.NQtnfQpV1osRhEgWZi_fIAHaCq",
        title : "image",
        alt : "image",
        target : "_blank"
    }
</script>

<template>
    <div>
        <a :href="data.url" :target="data.target">
            <img :src="data.url" :alt="data.alt" :title="data.title">
        </a>
    </div>
</template>

<style scoped>

</style>