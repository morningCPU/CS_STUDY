# 002 CSS Base Selectors

## 1.function
Used to select a tag

***

## 2.Selector classification
Base selectors and composite selectors
+ composite selectors:
1. label selectors
2. class selectors
3. id selectors
4. wildcard selectors

***

## 3.label selectors
Use the HTML tag name as the selector to select the tag
+ All of the same tags will be selected
+ format:
```
label {
    attribute : attribute value;
}
```
+ example:
```
h1 {
    color : red;
}
```

***

## 4.class selectors
Can select one or several of the tags individually
+ format:
```
.class name {
    attribute : attribute value;
}
<!-- invoke -->
<tag class = "red"> </tag>
```
+ The class name is self-chosen
+ The name can be separated by `-` in the middle
`a-name-chose`
+ example:
```
.red {
    color : red;
}
<h1 class = "red"> sdfaadsa </h1>
```

+ Multiple class names
Write multiple class names in class,spaced between them
```
<div class = "red small">dsfasdfa</div>
```

***

## 5.`id` selectors

+ format:
start with `#`
```
#id name{
    attribute:attribute value;
}
<!-- invoke -->
<tag id = "id name">
```
+ As you may have noticed,id selectors are similar to class selectors,
except that class selectors can only be called once

***

## 6.wildcard selectors
defined with `*`
+ format:
```
* {
    attribute : attribute value;
}
```
+ modify the style all labels