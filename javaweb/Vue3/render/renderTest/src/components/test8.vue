<script setup>
    import {ref,reactive} from "vue";
    let user = reactive(
        {id:1,name:"",pwd:"",hbs:[]}
    )
</script>

<template>
    <div>
        <input type="text" v-model="user.name">
        <input type="password" v-model="user.pwd">{{user}}<br>
        爱好: 
        <label>唱歌 <input type="checkbox" v-model="user.hbs" value="唱歌"></label><br>
        <label>跳舞 <input type="checkbox" v-model="user.hbs" value="跳舞"></label><br>
        <label>打篮球 <input type="checkbox" v-model="user.hbs" value="打篮球"></label><br>
        {{user.hbs}}
    </div>
</template>

<style scoped>

</style>