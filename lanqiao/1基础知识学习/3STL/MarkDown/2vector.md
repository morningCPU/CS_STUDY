<h1 style = "text-align : center"> vector </h1>

备注：要包含头文件 `<vector>`

## 1.作用
&emsp;&emsp;动态数组容器，用于存储一系列相同类型的元素

***

## 2.格式
&emsp;&emsp;vector<类型> 变量名

***
## 3.访问
&emsp;&emsp;访问方法与数组一样,要注意的是vector一定是从第0位开始的
示例：
```
#include<iostream>
using namespace std;
#include<vector>
int main()
{
    //创建
    vector <int> d;
    int n;cin >> n;
    //数据填充
    for(int i = 1;i<=n;++i)d.push_back(i);
    //输出
    for(int i = 0;i<n;++i)cout << d[i] << ' ';//从0开始
    return 0;
}
```

***

## 4.迭代器
+ `begin()` : 返回开始位置指针
+ `end()` : 返回结束位置后一个位置的指针
  看起来很奇怪，但很多函数的区间都是左闭右开的，这其实刚好可以配合函数的使用

***

## 5.在末尾添加元素
&emsp;&emsp;调用方法 `push_back()`
&emsp;&emsp;示例： `d.push_back(1);`

***

## 6.在指定位置插入元素
&emsp;&emsp;调用方法 `insert(地址,元素)`
&emsp;&emsp;示例： `d.insert(d.begin()+2,3);`

***

## 7.删除末尾元素
&emsp;&emsp;调用方法 `pop_back()`
&emsp;&emsp;示例： `d.pop_back();`

***

## 8.删除指定位置元素
&emsp;&emsp;调用方法 `erase(开始地址，结束地址)`
&emsp;&emsp;删除的位置为 `[开始地址，结束地址)` 是左闭右开的
&emsp;&emsp;示例： `d.pop_back(d.begin()+1,d.end() - 1);`
+ 扩展：
  通过 `erase` 与 `unique` 的结合可以实现去重的效果
```
#include<bits/stdc++.h>//万能头
using namespace std;
int main()
{
    vector<int> d;
    int n;cin >> n;
    for(int i = 1;i<=n;++i)
    {
        int x;cin >> x;
        d.push_back(x);
    }
    for(auto i : d)cout << i << ' ';
    cout << '\n';
    sort(d.begin(), d.end());              // 让相同元素相邻
    auto tmp = unique(d.begin(), d.end()); // 找到开始位置
    d.erase(tmp, d.end());
    for(auto i : d)cout << i << ' ';
    cout << '\n';
    return 0;
}
```

## 9.清空容器
&emsp;&emsp;调用方法 `clear()`
&emsp;&emsp;用于初始化容器
&emsp;&emsp;示例： `d.clear();`

***
## 10.容器大小
&emsp;&emsp;调用方法 `size()`
&emsp;&emsp;示例： `d.size();`

***
## 11.判断容器是否为空
&emsp;&emsp;调用方法 `empty()`
&emsp;&emsp;示例： `d.empty();`

***
## 12.调整容器大小
&emsp;&emsp;调用方法 `resize(字节大小)`
&emsp;&emsp;示例： `d.resize(sizeof(int) * 10);`
&emsp;&emsp;我感觉没什么用，本来 `vector` 都是当做动态容器用的
