# 003 CSS Attribute

## 1.font

|   attribute   | attribute value                          | interpretation                 |
| :-----------: | :--------------------------------------- | :----------------------------- |
| `font-family` | `"Microsoft YaHei"`...see below for more | defines the font for the text  |
|  `font-size`  | `npx`                                    | defines the size of the font   |
| `font-weight` | `normal`...see below for more            | defines the weight of the font |
| `font-style`  | 'normal' , 'italic'                      | defines the style of the font  |

### (1) font-family
+ function
defines the font for the text
+ value:
`"Microsoft YaHei"` , `Arial` 
+ You can write more than one attribute value
+ A name with a space in the middle should be wrapped in quotaton marks
+ The first available font is selected in order
```
font-family : "Microsoft YaHei" , Arial;
```
+ Generally,it is defined by the body tag
```
body {
    font-family : "Microsoft YaHei" , tahoma , arial,"Hiragino Sans GB";
}
```

### (2) font-size
+ function:
defines the size of the font
+ value:
the unit is px `npx`,note that units are added
+ The default size for Google Chrome is 16px
+ The size of the title should be specified separately
+ can write in body tag
```
body {
    font-size : 20px;
}
```

### (3) font-weight
+ function:
defines the weight of the font
+ value:
normal,bold,bolder,lighter
or number:100 | 200 | 300 | 400 **(normal)** | 500 | 600 | 700 **(bold)** | 800 | 900 (there are no unit)

### (4) font-style
+ function:
define the style of the font
+ value:
`normal` , `italic`

### (5) composite attributes
+ format:
```
body {
    font : font-style font-weight font-size/line-height font-family;
    <!-- font : normal 400 20px/30px "Microsoft YaHei"; -->
}
```
+ Strictly follow the order
+ the font-size and the font-family must be there

***

## 2.text

|     attribute     | attrubute value                               | interpretation                   |
| :---------------: | :-------------------------------------------- | :------------------------------- |
|      `color`      | predefined color values(red),rgb, hexadecimal | defines the color of the text    |
|   `text-align`    | left,center,right                             | define the alignment of the text |
| `text-decoration` | none,underline,overline,line-through          | add decoration to the text       |
|   `text-indent`   | npx , nem                                     | sets the first line indentation  |
|   `line-height`   | npx                                           | sets the row height              |

### (1) color
+ function:
defines the color of the text
+ value:
`predefined color` : red ,blue,yellow ...
`rgb` : rgb(255,255,255) or rgb(100%,100%,100%)
`hexdecimal` : #ffffff

### (2) text-align
+ function:
define the alignment of the text.However,you can only set the horizontal alignment
+ value:
`center` , `left` , `right`

### (3) text-decoration
+ function:
add decorations to the text
+ value:
none,underline,overline,line-through

### (4) text-indent
+ function:
sets the first line indentation
+ value:
`npx`,`em`(One text size)


### (5) line-height
+ function:
sets the row height
+ note:
Line spacing include upper spacing,text height and bottom spacing
+ value:
npx
