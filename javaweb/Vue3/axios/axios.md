# axios
## 1. promise
### 1.1 回调函数
基于事件的自动调用函数,其他函数不会等待回调函数的执行完毕
### 1.2 promise简介
异步编程的一种解决方案
+ 回调函数的一个容器
### 1.3 promise的三种状态
1. 进行中 (Pending)
2. 已完成 (Resolued)
3. 已失败 (Rejected)
### 1.4 基本使用

### 1.5 async
用于标识回调函数,返回的结果是一个promise对象
+ 方法如果正常return结果,那么promise状态就是Resolved
### 1.6 await
获取promise成功状态的返回值
1. await右边是一个普通值,则直接返回普通值
`let name = await "morning"`
2. 如果右边是一个Promise,则返回Promise的成功结果
3. 如果右边是一个失败状态的Promise会直接抛异常
4. await必须在async函数中使用

***

## 2. axios
添加axios依赖
`npm install axios`
### 2.1 get

### 2.2 post


***

## 3. 请求和拦截