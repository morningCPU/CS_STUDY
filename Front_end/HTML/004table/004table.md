# table



## 1.table tag
+ It is used to displaying and displaying data.
+ basic grammer

```
<table>
    <tr>
        <td> </td>
    </tr>
</table>
```

|        tag         | function         | remark                    |
| :----------------: | :--------------- | :------------------------ |
| `<table> </table>` | define the table | the outmost layer         |
|    `<tr> </tr>`    | define the rows  | in the table              |
|    `<td> </td>`    | define the cells | in the row                |
|    `<th> </th>`    | header cells     | it is bolded and centered |

***

## 2.table attributes

|   attribute   | attribute value           | describe                                |
| :-----------: | :------------------------ | :-------------------------------------- |
|    `align`    | left,center,right         | alignment                               |
|   `border`    | 1 or ""(default)          | define whether there is a border or not |
| `cellpadding` | pixel value               | padding(default 1px)                    |
| `cellspacing` | pixel value               | margins(default 2px)                    |
|    `width`    | pixel value or percentage | define the width                        |
|   `height`    | pixel value               | define the height                       |

***

## 3.table structure tag
In order to make the code better structured
+ `thead`
The header area of the table
+ `tbody`
The body area of the table

example:

```
<table>
    <thead>
        <tr>
            <th>1</th>
            <th>2</th>
            <th>3</th>
            <th>4</th>
            <th>5</th>
        </tr>
    </thead>
    <tbody>
        <tr  align = "right">
            <td>1dfad</td>
            <td>2sdfasdfafd</td>
            <td>3sdfasfd</td>
            <td align = "center">4sdafas</td>
            <td>5sdaf</td>
        </tr>
        <tr>
            <td>1dfadsfasdfa</td>
            <td>2sdfasdfafd</td>
            <td>3sdfasfd</td>
            <td>4sdafasdfasdfadfa</td>
            <td>5sdaf</td>
        </tr>
        <tr>
            <td>1dfadsfasdfa</td>
            <td>2sdfasdfafd</td>
            <td>3sdfasfd</td>
            <td>4sdafasdfasdfadfa</td>
            <td>5sdaf</td>
        </tr>   
        <tr>
            <td>1dfadsfasdfa</td>
            <td>2sdfasdfafd</td>
            <td>3sdfasfd</td>
            <td>4sdafasdfasdfadfa</td>
            <td>5sdaf</td>
        </tr>
    </tbody>
</table>
```

<table>
    <thead>
        <tr>
            <th>1</th>
            <th>2</th>
            <th>3</th>
            <th>4</th>
            <th>5</th>
        </tr>
    </thead>
    <tbody>
        <tr  align = "right">
            <td>1dfad</td>
            <td>2sdfasdfafd</td>
            <td>3sdfasfd</td>
            <td align = "center">4sdafas</td>
            <td>5sdaf</td>
        </tr>
        <tr>
            <td>1dfadsfasdfa</td>
            <td>2sdfasdfafd</td>
            <td>3sdfasfd</td>
            <td>4sdafasdfasdfadfa</td>
            <td>5sdaf</td>
        </tr>
        <tr>
            <td>1dfadsfasdfa</td>
            <td>2sdfasdfafd</td>
            <td>3sdfasfd</td>
            <td>4sdafasdfasdfadfa</td>
            <td>5sdaf</td>
        </tr>   
        <tr>
            <td>1dfadsfasdfa</td>
            <td>2sdfasdfafd</td>
            <td>3sdfasfd</td>
            <td>4sdafasdfasdfadfa</td>
            <td>5sdaf</td>
        </tr>
    </tbody>
</table>

***

## 4.merge cells
+ cross-line merge
`rowspan`
+ merge across columns
`colspan`
The attribute is written int the starting cell
+ implementation steps
  1. Determine how you want to merge and where to start merging
  2. remove redundant cells

My opinions: 
rowspan and colspan just make the starting cell bigger but not truly merge the cells,
and the result is the redundant cells had been pushed aside,then you need to remove them 

example:
```
<table width="800" height="450" border="1" cellspacing="0" align="center">
        <tr>
            <th></th>
            <th>1</th>
            <th>2</th>
            <th>3</th>
            <th>4</th>
            <th>5</th>
        </tr>
        <tr>
            <th>1</th>
            <td colspan="3" rowspan="3"></td>
            <td></td>
            <td></td>
        </tr>
        <tr>
            <th>2</th>
            <td></td>
            <td></td>
        </tr>
        <tr>
            <th>3</th>
            <td></td>
            <td></td>
        </tr>
        <tr>
            <th>4</th>
            <td></td>
            <td></td>
            <td></td>
            <td></td>
            <td></td>
        </tr>
        <tr>
            <th>5</th>
            <td></td>
            <td></td>
            <td></td>
            <td></td>
            <td></td>
        </tr>
    </table>
```

<table width="800" height="450" border="1" cellspacing="0" align="center">
        <tr>
            <th></th>
            <th>1</th>
            <th>2</th>
            <th>3</th>
            <th>4</th>
            <th>5</th>
        </tr>
        <tr>
            <th>1</th>
            <td colspan="3" rowspan="3"></td>
            <td></td>
            <td></td>
        </tr>
        <tr>
            <th>2</th>
            <td></td>
            <td></td>
        </tr>
        <tr>
            <th>3</th>
            <td></td>
            <td></td>
        </tr>
        <tr>
            <th>4</th>
            <td></td>
            <td></td>
            <td></td>
            <td></td>
            <td></td>
        </tr>
        <tr>
            <th>5</th>
            <td></td>
            <td></td>
            <td></td>
            <td></td>
            <td></td>
        </tr>
    </table>


<table border = "1" cellspacing = "0">
    <tr>
        <th></th>
        <th>1</th>
        <th>2</th>
        <th>3</th>
        <th>4</th>
        <th>5</th>
        <th>6</th>
    </tr>
    <tr>
        <th>1</th>
        <td></td>
        <td rowspan = "3"></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <th>2</th>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <th>3</th>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <th>4</th>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <th>5</th>
        <td></td>
        <td></td>
        <td colspan = "3"></td>
        <td></td>
    </tr>
    <tr>
        <th>6</th>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
    </tr>
</table>