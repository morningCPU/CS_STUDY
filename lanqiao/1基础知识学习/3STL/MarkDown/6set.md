<h1 style = "text-align : center">set</h1>

备注：需要包含头文件 `<set>`

## 1.作用
&emsp;&emsp;用于存储一组唯一的元素(元素不重复)
&emsp;&emsp;默认会是从小到大排序

***

## 2.格式
&emsp;&emsp;`set<数据类型> 变量名;`
&emsp;&emsp;示例：`ser<int> d;`

*** 

## 3.插入一个元素
&emsp;&emsp;调用方法：`insert(value)`
&emsp;&emsp;示例：`d.insert(2);`

*** 

## 4.删除一个元素
&emsp;&emsp;调用方法：`erase(value)`//注意这里value是一个元素而不是地址
&emsp;&emsp;示例：`d.erase(2);`

*** 

## 5.清空
&emsp;&emsp;调用方法：`clear()`
&emsp;&emsp;示例：`d.clear();`

*** 

## 6.查找一个元素
&emsp;&emsp;调用方法：`find(value)`
&emsp;&emsp;如果没有找到会返回 `d.end()` ,即最后一个元素的后一个位置的地址
&emsp;&emsp;示例：`d.find(2);`

*** 

## 6.查找一个元素
&emsp;&emsp;调用方法：`find(value)`
&emsp;&emsp;如果没有找到会返回 `d.end()` ,即最后一个元素的后一个位置的地址
&emsp;&emsp;示例：`d.find(2);`

*** 

## 7.lower_bound
&emsp;&emsp;调用方法：`lower_bound(value)`
&emsp;&emsp;返回第一个不小于 value 的迭代器
&emsp;&emsp;示例：`d.lower_bound(2);`

*** 

## 8.upper_bound
&emsp;&emsp;调用方法：`upper_bound(value)`
&emsp;&emsp;返回第一个大于 value 的迭代器
&emsp;&emsp;示例：`d.lower_bound(2);`

+ 解释：
比如：`1 2 2 2 3 3 3 4 5` , 设对应的地址为 `0 1 2 3 4 5 6 7 8`
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

## 9.迭代器
+ `d.begin();` : 返回开始位置的迭代器
+ `d.end();` : 返回结束位置的下一个位置的迭代器
+ `d.rbegin();` : 返回结束位置的反向迭代器
+ `d.rend();` : 返回开始位置的上一个位置的反向迭代器
这里要注意迭代器的用法，迭代器只能用 `!=` 或 `== `进行比较，不能用 `<`,`<=`,`>`,`>=`

示例：
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int, greater<int>> d;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        d.insert(x);
    }
    for (auto i = d.begin(); i != d.end(); ++i)
        cout << *i << ' ';
    cout << '\n';
    for (auto i = d.rbegin(); i != d.rend(); ++i)
        cout << *i << ' ';
    cout << '\n';
    return 0;
}
```
***
<h1 style = "text-align : center">特殊集合形式</h1>

***

<h1 style = "text-align : center">multiset</h1>
<h2 style = "text-align : center">多重集合</h2>

## 1.作用
&emsp;&emsp;定义一个可以包含重复元素的集合

***

## 2.格式
&emsp;&emsp;`multiset<元素类型> 变量名;`
&emsp;&emsp;示例：`multiset<int> a;`

***
下面只介绍有别于 `set` 的操作

## 3.删除指定元素
&emsp;&emsp;调用方法 `erase(value)`
&emsp;&emsp;示例：`d.erase(2);`
+ 注意这里会删除全部值为 `value` 的数据
+ 删除单个指定数据 : `d.erase(d.find(value));`//这里的value是迭代器

***

## 4.erase
&emsp;&emsp;大家可能注意到了 `erase()` 的用法有很多
&emsp;&emsp;这里再详细介绍一下 `erase()`
&emsp;&emsp;`erase()` 有三种重载，

+ `erase(元素值);`
会删除所有等于这个元素值的元素
返回值为删除的元素的个数

+ `erase(迭代器);`
会删除迭代器所在位置的元素(迭代器其实就相当于一个特殊的指针)
无返回值

+ `erase(开始迭代器,结束迭代器);`
会删除 `[开始迭代器,结束迭代器)` 之间的元素
无返回值

***
## 5. 统计元素个数
&emsp;&emsp;调用方法 `count(value)`
&emsp;&emsp;示例：`d.count(2);`

***

<h1 style = "text-align : center">unordered_set</h1>
<h2 style = "text-align : center">无序集合</h2>

## 1.作用
&emsp;&emsp;用于存储一组唯一的元素，但没有特定的顺序
&emsp;&emsp;无序集合是基于哈希存储实现的，所以操作的时间复杂度会更低
+ 操作与 `set` 基本相同，这里就不再重复介绍