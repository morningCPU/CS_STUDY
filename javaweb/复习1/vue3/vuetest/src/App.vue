<script setup>

</script>

<template>
    <div>
        <h1>这里是头部</h1>
        <hr>
        <div id="router_link_contain">
            <router-link id="router_link" to="/">home</router-link><br>
            <router-link id="router_link" to="/page1">page1</router-link><br>
            <router-link id="router_link" to="/page2">page2</router-link><br>
            <router-link id="router_link" to="/page3">page3</router-link><br>
            <router-link id="router_link" to="/page4">page4</router-link><br>
        </div>
        <hr>
        <div>
            <router-view></router-view>
        </div>
        <hr>
        <h1>下面是单独展示</h1>
        <div>
            <hr>
            123
            <router-view name="page1"></router-view>
            <hr>
            123
            <router-view name="page2"></router-view>
            <hr>
            123
            <router-view name="page3"></router-view>
            <hr>
            123
            <router-view name="page4"></router-view>
            <hr>
        </div>

    </div>
</template>

<style scoped>
h1 {
    background-color: pink;
}

#router_link {
    display: inline-block;
    width: 100px;
    text-align: center;
    border: 1px black solid;
    margin-bottom: 5px;
    background-color: rgb(184, 184, 216);
}

#router_link_contain {
    text-align: center;
}
</style>