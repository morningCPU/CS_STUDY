# CSS

## 1.Main role

It is mainly used to set the text content in the HTML page,
the shape of the image,and the layout and appearance of the layout.

***

## 2.format

selector + statement
```
h1 {color : red ; font-size : 25px;}
```
Note the `:` and the value is not enclosed with `" "`

***

## 3.placement location
put the style part int the head
It is generally not written as such,but in a separate CSS file.
```
<head>
    <style>
    </style>
</head>
<body>
</body>
```

***

## 4.example
```
<!DOCTYPE html>
<html lang="zh-CN">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Introduction</title>
    <style>
        p {
            color: red;
        }
    </style>
</head>

<body>
    <p>dsfasfadfa</p>
</body>

</html>
```