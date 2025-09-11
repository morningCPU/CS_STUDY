<script setup>
import { ref,reactive,watch,watchEffect} from 'vue';

    let name = reactive({
        firstName : "Hello"
    });

    let secondName = ref("Morning");

    let fullName = ref("");

    // watch(()=>name.firstName,(newValue,oldValue)=>{
    //     console.log(oldValue + "变为" + newValue);
    //     fullName.value = name.firstName + secondName.value; 
    // });

    // watch(()=>name,()=>{
    //     fullName.value = name.firstName + secondName.value;
    // },{deep:true,immediate:true})

    // watch(secondName,(newValue,oldValue)=>{
    //     console.log(oldValue + "变为" + newValue);
    //     fullName.value = name.firstName + secondName.value;
    // },{immediate:true});

    // *******************************************************

    watchEffect(()=>{
        fullName.value = name.firstName + secondName.value;
    })

</script>

<template>
    <div>
        姓: <input type="text" v-model="name.firstName"><br>
        名: <input type="text" v-model="secondName"><br>
        姓名: {{fullName}}
    </div>
</template>

<style scoped>

</style>