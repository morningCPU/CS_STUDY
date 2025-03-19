<h1 style = "text-align : center">map</h1>

备注：要包含头文件 `<map>`

## 1.作用
&emsp;&emsp;创建一种关联容器，用于存储一组键值对
&emsp;&emsp;默认会按照键从小到大进行排序

***

## 2.格式
&emsp;&emsp;`map<数据元素,数据元素> d;`
&emsp;&emsp;示例 ：`map<int,int> d;`

***

## 3.增添
&emsp;&emsp;调用方法 `insert()`
&emsp;&emsp;示例 ：`d.insert({1,2});`
+ 一般直接通过键进行添加 `d[key] = value;`
如果没有 `key` 这个键则会自动添加

***

## 4.删除
&emsp;&emsp;调用方法 `erase()`
&emsp;&emsp;示例 ：`d.erase(key);`

***

## 5.清空
&emsp;&emsp;调用方法 `clear()`
&emsp;&emsp;示例 ：`d.clear(key);`

***

## 6.查找元素
&emsp;&emsp;调用方法 `find(key)`
&emsp;&emsp;如果找到则返回键 key 所在迭代器，没找到则返回 `d.end()`
&emsp;&emsp;示例 ：`d.find(key);`

***

## 7.统计个数
&emsp;&emsp;调用方法 `count(key)`
&emsp;&emsp;map 不能有相同的键，所以 `count()` 主要是用来判断一个键是否存在
&emsp;&emsp;示例 ：`d.count(key);`

***

## 8.map的大小
&emsp;&emsp;调用方法 `size()`
&emsp;&emsp;示例 ：`d.size();`

***

## 9.判断 map 是否为空
&emsp;&emsp;调用方法 `empty()`
&emsp;&emsp;示例 ：`d.empty();`

*** 

## 10.lower_bound()
&emsp;&emsp;调用方法：`lower_bound(key)`
&emsp;&emsp;返回第一个键不小于 key 的迭代器
&emsp;&emsp;示例：`d.lower_bound(2);`

*** 

## 11.upper_bound()
&emsp;&emsp;调用方法：`upper_bound(key)`
&emsp;&emsp;返回第一个键大于 key 的迭代器
&emsp;&emsp;示例：`d.lower_bound(2);`

+ 解释：
比如：键为 `1 2 2 2 3 3 3 4 5` , 设对应的地址为 `0 1 2 3 4 5 6 7 8`
`d.lower_bound(2)` 结果为 1
`d.upper_bound(3)` 结果为 7
由此可以求出 [2,3] 之间的数的个数 `d.upper_bound(3) - d.lower_bound(2)`

+ 注意：
有函数为`lower_bound(st,ed,value)` , `upper_bound(st,ed,value)`
前面的是 set 容器的函数，这里的是 <algorithm> 里的函数

| 参数  |              解释              |
| :---: | :----------------------------: |
|  st   |            开始地址            |
|  ed   | 结束地址(注意范围是 `[st,ed)`) |
| value |               值               |

***

<h1 style = "text-align : center">特殊的map</h1>

***

<h1 style = "text-align : center">multimap</h1>

## 1.作用
&emsp;&emsp;相比 `map` 可以有多个相同的键

***

<h1 style = "text-align : center">unordered_map</h1>

## 1.作用
&emsp;&emsp;相比 `map` 它是一哈希形式存储的，而不会根据键进行排序