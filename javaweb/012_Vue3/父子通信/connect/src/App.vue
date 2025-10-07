<script setup>
import show from './components/show.vue';
import { ref } from 'vue';
import { PersonStore } from './store/store';
let personStore = PersonStore();
let message = ref("");

function accept(data) {
  message.value = data;
}
</script>

<template>
  <div>
    父: <input type="text" v-model="message">
    <show :childGet="message" @sendMessage="accept" />
    userName: {{ personStore.userName }} <br>
    age: {{ personStore.age }} <button @click="personStore.addAge()">+</button><button
      @click="personStore.decAge()">-</button>
  </div>
</template>

<style scoped></style>