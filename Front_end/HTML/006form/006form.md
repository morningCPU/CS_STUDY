# 006 Form Tag

## 1.function
Used to collect user information

***

## 2.constituent elements
+ form fields
+ form controls
+ prompt information

***

## 3.form fields
+ function:
form will submit its range of form element information to the server
+ format: 
```
<form action = "url" method = "how to submit" name = "the name of the form">

</form>
```

| attribute | attribute value | interpretion                                                                      |
| :-------: | :-------------- | :-------------------------------------------------------------------------------- |
|  action   | url             | the address of the serve                                                          |
|  method   | get or post     | how to submit                                                                     |
|   name    | string          | the name of the form,used to distinguish between different forms on the same page |

***

## 4.form controls
### 4.1 input
+ fromat:`<input type = "button" />`

+ value

| attribute | atrribute value  | discription                                           |
| :-------: | :--------------- | :---------------------------------------------------- |
|   type    | a lot below      | define the type of the controls                       |
|   name    | costimize        | define the name of the input element                  |
|   value   | costimize        | define the value of the input element                 |
|  checked  | checked          | the rule si initially selected                        |
| maxlength | positive integer | specifies the maximum length of the input chareacters |

注意：
1. name and value are the value that each element must have,and are mainly used in background.
2. radio and checkbox must have the same name


+ the value of type

|   value    | discription                                             |
| :--------: | :------------------------------------------------------ |
|  `radio`   | Define radio buttons                                    |
| `checkbox` | Define checkboxex                                       |
|   `text`   | Define a single-line input field                        |
| `password` | Define password fields                                  |
|   `file`   | Define input fields and browse buttons for file uploads |
|  `reset`   | Define the reset button                                 |
|  `submit`  | Define the submit button                                |
|  `button`  | Define clickable buttons                                |
|  `hidden`  | Define hidden input fields                              |
|  `image`   | Define the submit button for the image format           |

example:
```
<form action = "#" method = "get" name = "Hello">
    用户名 ： <input type = "text" name = "username" value = "请输入用户名" maxlength = "10"><br>
    密码 ： <input type = "password" name = "password" value = "请输入密码" maxlength = "10"><br>
    性别：  男<input type = "radio" name = "sex" value = "sex_b">
            女<input type = "radio" name = "sex" value = "sex_m"><br>
    爱好：  吃饭<input type = "checkbox" name = "habbby" value = "eat" checked = "checked">
            睡觉<input type = "checkbox" name = "habbby" value = "sleep">
            打豆豆<input type = "checkbox" name = "habbby" value = "beat the beans">
    <br>
    <input type = "reset"><br>
    <input type = "submit" name = "submit" value = "确认"><br>
    <input type = "button" value = "获取验证码"><br>
    <input type = "file"><br>
    <input type = "hidden"><br>
    <input type = "image"><br>
</form>
```
<form action = "#" method = "get" name = "Hello">
    用户名 ： <input type = "text" name = "username" value = "请输入用户名" maxlength = "10"><br>
    密码 ： <input type = "password" name = "password" value = "请输入密码" maxlength = "10"><br>
    性别：  男<input type = "radio" name = "sex" value = "sex_b">
            女<input type = "radio" name = "sex" value = "sex_m"><br>
    爱好：  吃饭<input type = "checkbox" name = "habbby" value = "eat" checked = "checked">
            睡觉<input type = "checkbox" name = "habbby" value = "sleep">
            打豆豆<input type = "checkbox" name = "habbby" value = "beat the beans">
    <br>
    <input type = "reset"><br>
    <input type = "submit" name = "submit" value = "确认"><br>
    <input type = "button" value = "获取验证码"><br>
    <input type = "file"><br>
    <input type = "hidden"><br>
    <input type = "image"><br>
</form>

### 4.2 label Tag

+ format :
It has tow part : `for` and `id`
step 1: `<label for = "sex"> 男 </label>`
step 2: `<input type = "radio" name = "sex" value = "man" id = "sex" />`
+ function:
Bind a form control for the cursor's autofocus.

example:
```
<form>
    爱好：  <label for = "eat">吃饭</label><input id = "eat" type = "checkbox" name = "habbby" value = "eat" checked = "checked">
            <label for = "sleep">睡觉</label><input id = "sleep" type = "checkbox" name = "habbby" value = "sleep">
            <label for ="bear the beans">打豆豆</label><input id = "beat the beans"type = "checkbox" name = "habbby" value = "beat the beans">
</form>
```
<form>
    爱好：  <label for = "eat">吃饭</label><input id = "eat" type = "checkbox" name = "habbby" value = "eat" checked = "checked">
            <label for = "sleep">睡觉</label><input id = "sleep" type = "checkbox" name = "habbby" value = "sleep">
            <label for ="beat the beans">打豆豆</label><input id = "beat the beans"type = "checkbox" name = "habbby" value = "beat the beans">
</form>

### 4.3 select
+ function : Multiple options are available for users to choose from.
+ format:
```
<select>
    <option> </option>
</select>
```
+ Default is ckecked : `selected = "selected"`
example:
```
<form>
    <select name = "number">
        <option selected = "selected">请选择一个数字</option>
        <option>1</option>
        <option>2</option>
        <option>3</option>
        <option>4</option>
        <option>5</option>
    <select>
</form>
```
<form>
    <select name = "number">
        <option selected = "selected">请选择一个数字</option>
        <option>1</option>
        <option>2</option>
        <option>3</option>
        <option>4</option>
        <option>5</option>
    <select>
</form>

### 4.4 textarea
+ function:
used to define multiple line inputs
+ format:
```
<textarea rows = "3" cols = "5">
    ...
</textarea>
```
<form>
    <textarea rows = "5" col = "30">
please enter
    </textarea>
</form>


