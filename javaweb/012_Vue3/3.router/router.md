# 路由(router)
实现页面切换

## 1. 使用
1. 导入 router 依赖
```
npm install vue-router@4 --save
```

***

## 2. 重定向
```
{
    path:"/showAll",
    redirect:"/list"
}
```
+ 也可以有多个router,加上name

***

## 3. 编程式router
通过函数

***

## 4. router传参
1. 路径参数

2. 键值对参数

***

## 5. router守卫
用于在页面切换期间进行一些特定任务的回调函数
1. 全局前置守卫
在router切换前调用,可以用于验证用户是否已经登陆,中断导航,请求数据等
2. 全局后置守卫
在router切换后调用,可以用于处理数据,操作DOM,记录日志等

+ 不能在无条件的时候进行重定向,会造成死循环