<script setup>
import { reactive,computed} from 'vue';

    const author = reactive({
        name:"morning",
        books:["1","2","3"]
    })

    let hasBook = computed(()=>{
        return author.books.length == 0 ? "否" : "是";
    })

</script>

<template>
    <div>
        <p>作者:{{author.name}}</p>
        是否出版过图书: {{hasBook}}
    </div>
</template>

<style scoped>

</style>