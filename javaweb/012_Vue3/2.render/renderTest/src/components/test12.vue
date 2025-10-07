<script setup>
    import { ref } from "vue";
    import Header from "./test12_1.vue";
    import Navigator from "./test12_2.vue";
    import Content from "./test12_3.vue";

    let s = ref("");
    function receive(mes){
        s.value = mes;
    }

</script>

<template>
    <div>
         <Header id="Header"></Header>
         <Navigator id="Navigator" @images="receive"></Navigator>
         <Content id="Content" :images="s"></Content>
    </div>
</template>

<style scoped>
    #Header{
        height: 80px;
        border: 1px solid black;
    }
    #Navigator{
        width: 15%;
        height: 800px;
        border: 1px solid black;
        float: left;
    }
    #Content{
        width: 83%;
        height: 800px;
        border: 1px solid black;
        float: right;
    }
</style>