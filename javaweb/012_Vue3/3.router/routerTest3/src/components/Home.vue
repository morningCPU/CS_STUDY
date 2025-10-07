<script setup>
    import {ref} from "vue";
    import {useRouter} from "vue-router";
    const router = useRouter();

    let user = ref("");
    user.value = ref(sessionStorage.getItem("user"));

    function logout(){
        sessionStorage.clear();
        router.push("/login");
    }
</script>

<template>
  <div>
    <h1>Home</h1>
    <p>欢迎 {{user}} 登录</p>
    <button @click="logout">退出登录</button>
  </div>
</template>

<style scoped>

</style>
