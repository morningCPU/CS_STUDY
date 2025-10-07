<script setup>
    import {ref} from "vue";
    import {useRouter} from "vue-router";
    const router = useRouter();

    let user = ref("");
    let pas = ref("");

    function login(){
        if(user.value == "root" && pas.value == "123456"){
            sessionStorage.setItem("user",user.value);
            router.push("/home");
        }else{
            alert("登录失败");
        }
    }
</script>

<template>
  <div>
    <h1>Login</h1>
    账号 : <input type="text" name="user" id="user" v-model="user"><br>
    密码 : <input type="password" name="pas" id="pas" v-model="pas"><br>
    <button @click="login">登录</button>
  </div>
</template>

<style scoped>

</style>
