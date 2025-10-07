<script setup>
  let msg = "hello";
  let getMsg = ()=>{
    return "hello vue3"
  }
  let age = 18;
  let bee = "米 粉"
  let users = [{name:"可乐",price:3,number:10},{name:"薯片",price:6,number:8}];
  let getPrice = ()=>{
    let sum = 0;
    for(let i in users){
      sum += users[i].price*users[i].number;
    }
    return sum;
  }

</script>

<template>
  <div>
    <p>{{msg}}</p>
    <p>{{getMsg()}}</p>
    <p>{{age}}</p>
    <p>{{bee}}</p>
    <p>{{users[0].name}}</p>
    <p>{{users}}</p>
    <p>{{getPrice()}}</p>
    是否成年:{{age >= 18 ? '是' : '否'}}
  </div>
</template>

<style scoped>

</style>
