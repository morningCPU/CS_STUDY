# Composite selector

## 1.Descendant selector
+ function:
Selector the child element within the parent element
+ format:
```
parent child {
    attribute : attribute value;
}
<!-- parent and child can be arbitrary base selectors -->
```
+ example:
```
ol li{
    color : red;
}
```

***

## 2.sub selectors
+ function:
Select the nearest child element of an element
+ format:
```
father > child {
    attribute : attribute value;
}
```
+ example:
```
ol > a{
    color : red;
}
```

***

## 3.union selector
+ function:
select multiple sets of labels
+ format:
```
tag1,tag2 {
    attribute : attribute value;
}
```
+ example:
p,div{
    color : red;
}

***

## 4.pseudo-class selectors
+ function:
Used to add special effects
+ use `:`
+ **Link pseudo-class selectors**

|  selector   | interpretation     |
| :---------: | :----------------- |
|  `a:link`   | Not visited        |
| `a:visited` | visited            |
|  `a:hover`  | The mouse is above |
| `a:active`  | active             |

+ The ensure that all settings will take effect,follow the order of length below:
`:link` -> :`visited` -> `:hover` -> `:active`
+ Doing so will prevent the style from being overwrittens

+ **:focus pseudo-class selectors**
Used to selector the form element to get focus
```
input : focus{
    background-color : red;
}
```





