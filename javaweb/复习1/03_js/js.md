## 1. 常见的数据类型
1. number
2. string
3. boolean
4. Object
5. function
6. undefine
7. null
## 2. json
let person = '{"name":"morning","age":18,"pet":"dog"}';
注意要单引号包双引号
JSON.parse
JSON.stringify
## 3. java使用json
测试import org.junit.jupiter.api.Test;
使用ObjectMapper的方法
Object -> JSON
objectMapper.writeValueAsString()
+ 这里要非常注意,对象属性如果是私有的,需要get方法,不然jackson无法使用
JSON -> Object
使用objecMapper.readValue()
## 4. 用户行为
### 4.1 鼠标事件
+ onclick
+ ondbclick
+ oncontextmenu
+ onmousedown
+ onmouseup
+ onmousemove
+ onmouseenter
+ onmouseleave
+ onmouseover
+ onmouseout
### 4.2 键盘事件
+ onkeydown
+ onkeypress
+ onkeyup
### 4.3 表单事件
+ onblur
+ onfocus
+ onchange
+ onfocusin
+ onfocusout
+ oninput
+ onreset
+ onsearch
+ onselect
+ onsubmit
### 4.4 弹窗的三种方式
1. alert()
2. confirm()
3. prompt
### 4.5 阻止提交
1. confirm() + event.preventDefault
```javascript
<form action="001.html" method="get" onsubmit="func(event)">
   <input type="submit" value="提交">
</form>
<script>
   let func = (event) => {
       if (!confirm("确认提交吗")) {
           event.preventDefault();
       }
   }
</script>
```
2. confirm() + 返回值
```javascript
<form action="001.html" method="get" onsubmit="return func()">
    <input type="submit" value="提交">
</form>
<script>
    let func = () => {
        return confirm("确认提交吗");
    }
</script>
```
## 5. DOM编程绑定
```javascript
<form action="001.html" method="get" id="form">
    <input type="submit" value="提交">
</form>
<script>
    let obj = document.querySelector("#form");
    obj.onsubmit = (event) => {
        if (!confirm("确认提交吗")) {
            event.preventDefault();
        }
    };
</script>
```
## 6. BOM编程
BOM(browser object model)
## 7. 元素操作
1. document.creatElement()
2. document.creatTextNode()
3. parentElement.appendChile()
4. parentElement.insertBefore(new,obj)
5. parentElement.replaceChile(new,old)
6. element.remove()
7. elemnet.innerHTML=""
## 8. 正则表达式
+ `*` 0个或多个
+ `+` 1个或多个
+ `?` 0个或1个