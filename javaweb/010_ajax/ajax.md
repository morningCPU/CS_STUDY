# ajax
## 1. 简介
AJAX(Aysnchronous JavaScript and XML)异步的JavaScript和XML
在不用加载整个页面的情况下,可以与服务器交换数据并跟新部分网页内容
XMLHttpRequest是实现Ajax的一种方式

***

## 2. 实现方式
1. 原生js
2. 第三方 jquery
3. 框架 vue axios

## 3. 原生js实现
使用 `XMLHttpRequest`
```html
<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="UTF-8">
    <title>AjaxTest</title>
</head>
<body>
<button onclick="getMessage()">按钮</button>
<input type="text" id="userNameText">

<script>
    function getMessage() {
        //实例化一个XMLHttpRequest
        var xmlHttpRequest = new XMLHttpRequest();
        //设置xmlHttpRequest对象的回调函数
        xmlHttpRequest.onreadystatechange = function(){
            if(xmlHttpRequest.readyState === 4 && xmlHttpRequest.status === 200){
                alert("后端响应了")
                var obj = document.getElementById("userNameText");
                obj.value = xmlHttpRequest.responseText;
                console.log(xmlHttpRequest.responseText);
            }
        };
        //设置发送请求的方式和请求的资源的路径
        xmlHttpRequest.open("get","/hello?userName=changsan")
        //发送请求
        xmlHttpRequest.send()
    }
</script>
</body>
</html>
```

