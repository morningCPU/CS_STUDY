<h1 style = "text-align : center"> list </h1>

备注：要包含头文件 `<list>`

## 1.作用
&emsp;&emsp;双向链表容器
&emsp;&emsp;这里要注意list和vector很像，但 list 是链表，而 vector 是数组

***

## 2.格式
&emsp;&emsp;`list<数据类型> 变量名`
&emsp;&emsp;示例：list<int> d;

***

## 3.在头部插入
&emsp;&emsp;调用方法 `push_front(value)`
&emsp;&emsp;示例：`d.push_front(1);`;

***

## 4.在尾部插入
&emsp;&emsp;调用方法 `push_back(value)`
&emsp;&emsp;示例：`d.push_back(1);`;

***

## 5.删除头部元素
&emsp;&emsp;调用方法 `pop_front()`
&emsp;&emsp;示例：`d.pop_front();`;

***

## 6.删除尾部元素
&emsp;&emsp;调用方法 `pop_back()`
&emsp;&emsp;示例：`d.pop_back();`;

***

## 7.获取头部元素
&emsp;&emsp;调用方法 `front()`
&emsp;&emsp;示例：`d.front();`;

***

## 8.获取尾部元素
&emsp;&emsp;调用方法 `back();`
&emsp;&emsp;示例：`d.back();`;

***

## 综合代码
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> d;
    int n;
    cin >> n;
    while (n--) // 头部插入
    {
        int x;
        cin >> x;
        d.push_front(x);
    }
    for (auto i : d)
        cout << i << ' ';
    cout << '\n';
    cin >> n;
    while (n--) // 尾部插入
    {
        int x;
        cin >> x;
        d.push_back(x);
    }
    for (auto i : d)
        cout << i << ' ';
    cout << '\n';
    cout << d.front() << '\n'; // 输出头部元素
    cout << d.back() << '\n';  // 输出尾部元素
    d.pop_front();             // 删除头部元素
    for (auto i : d)
        cout << i << ' ';
    cout << '\n';
    d.pop_back(); // 删除尾部元素
    for (auto i : d)
        cout << i << ' ';
    cout << '\n';
    return 0;
}
```

