# 003 Commonly Used Labels

## 1.Title tag
&emsp;&emsp;`<h1> ~ <h6>`
example:
```
<h1> level 1 heading </h1>
<h2> level 2 heading </h2>
<h3> level 3 heading </h3>
<h4> level 4 heading </h4>
<h5> level 5 heading </h5>
<h6> level 6 heading </h6>
```

<h1 id = "001"> level 1 heading </h1>
<h2> level 2 heading </h2>
<h3> level 3 heading </h3>
<h4> level 4 heading </h4>
<h5> level 5 heading </h5>
<h6> level 6 heading </h6>

+ peculiarity
The headings are on a separate line

***

## 2.Paragraph tag
&emsp;&emsp;`<p> </p>`
example:
```
<p> This is a paragraph </p>
```
<p> This is a paragraph </p>
<p> This is a paragraph </p>
<p> This is a paragraph </p>

***

## 3.Wrap tag
&emsp;&emsp;`<br />`
example:
```
<p>This is example of the<br /> use of br.</p>
```
<p>This is example of the<br /> use of br.</p>

***

## 4.Text formatting tag
|               tag                | function      |
| :------------------------------: | :------------ |
| `<strong> </strong> or <b> </b>` | bold          |
|     `<em> </em> or <i> </i>`     | incline       |
|    `<del> </del> or <s> </s>`    | strikethrough |
|    `<ins> </ins> or <u> </u>`    | underline     |

+ The former has a bold effect.

example:
```
<strong> bold </strong>
<b> bold </b>
<em> incline </em>
<i> incline </i>
<del> strikethrough </del>
<s> strikethrough </s>
<ins> underline </ins>
<u> underline </ins>
```
<strong> bold </strong>
<b> bold </b>
<em> incline </em>
<i> incline </i>
<del> strikethrough </del>
<s> strikethrough </s>
<ins> underline </ins>
<u> underline </u>

***

## 5.box tags

+ small box : `<span> </span>`
peculiarity:
A row can have multiple span

+ big box : `<div> </div>`
peculiarity:
Only one div can be placed in a row.

example:
```
<div>This is a big box</div><span> This is a small box</span></br>
<span> This is a small box</span><span> This is a small box</span><span> This is a small box</span>
```
<div>This is a big box</div><span> This is a small box</span></br>
<span> This is a small box</span><span> This is a small box</span><span> This is a small box</span>

***

## 6.image tag
&emsp;&emsp;`<img src = "URL" />`
example:
```
<img src = "images/C++.png" alt = "example" title = "example" width = "100" height = "100" border = "2" />
```
<img src = "images/C++.png" alt = "example" title = "example" width = "100" height = "100" border = "2" /><br />
<img src = "images/C++.png" alt = "example" title = "example" width = "500" border = "0" />

| attribute |    attribute value    | illustrate                                                                         |
| :-------: | :-------------------: | :--------------------------------------------------------------------------------- |
|    src    | The path of the image | must attribute                                                                     |
|    alt    |         text          | The text that is displayed when the image cannot be displayed                      |
|   title   |         text          | The text that appears when mouse is over the image                                 |
|   width   |         pixel         | The width of the image(You don't need to bring a unit,the unit will come with px/) |
|  height   |         pixel         | The height of the image                                                            |
|  border   |         pixel         | The size of the image border                                                       |

***

## 7.hyperlink tag
&emsp;&emsp;`<a href = "url"> </a>`

| attribute | attribute value      | illustrate                                                             |
| :-------: | :------------------- | :--------------------------------------------------------------------- |
|   href    | the address of link  | must attribute                                                         |
|  target   | how to open the link | `_self`(open in current page)(default) or `_blank`(open in a new page) |

### special links
+ empty link
`<a href = "#"> </a>`
replace the address with `#`
+ Various web elements such as text,images,tables,audio,video and etc. can be hyperlinked
example:
```
<a href = "#" target = "_blank"><img src = "images/C++.png"></a>
```
<a href = "#" target = "_blank"><img src = "images/C++.png"></a>

+ anchor links
achieve the effort of fast positioning
format : 
+ `<a href = "#id"> </a>`
+ `<h2 id = "id"> </h2>`
example:
```
<h1 id = "001"> level 1 heading </h1>
<a href = "#001">return the top</a>
```
<a href = "#001">return the top</a>
replace the address with # + id , and you need to add the id attribute to the tag you want to jump to.

***

## 8.annotation
&emsp;&emsp;format : `<!--  -->`
&emsp;&emsp;shortcut key : ctrl + / 
&emsp;&emsp;The contents of the annotation are not displayed on the output

***

## 9.special characers

| character | description          |    code    |
| :-------: | :------------------- | :--------: |
|  &nbsp;   | space                |  `&nbsp;`  |
|   &lt;    | less than sign       |   `&lt;`   |
|   &gt;    | greater than sign    |   `&gt;`   |
|   &amp;   | and sign             |  `&amp;`   |
|   &yen;   | renminbi             |  `&yen;`   |
|  &copy;   | copyright            |  `&copy;`  |
|   &reg;   | registered trademark |  `&reg;`   |
|   &deg;   | degree               |  `&deg;`   |
| &plusmn;  | plus or minus        | `&plusmn;` |
|  &times;  | multiplication sign  | `&times;`  |
| &divide;  | division             | `&divide;` |
|  &sup2;   | square 2             |  `&sup2;`  |
|  &sup3;   | cube 3               |  `&sup3;`  |

