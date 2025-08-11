<h1 style = "text-align:center">stack</h1>

备注：要包含头文件 `<stack>`

## 1.作用
&emsp;&emsp;定义一种先进后出的数据结构

***

## 2.格式
&emsp;&emsp;`stack<数据类型> 变量名;`
&emsp;&emsp;示例：`stack<int> d`;

***

## 3.入栈
&emsp;&emsp;调用方法 `push()`
&emsp;&emsp;示例：`d.push(1);`

***

## 4.出栈
&emsp;&emsp;调用方法 `pop()`
&emsp;&emsp;示例：`d.pop();`

***

## 5.栈顶元素
&emsp;&emsp;调用方法 `top()`
&emsp;&emsp;示例：`d.top();`

***

## 6.判断是否为空
&emsp;&emsp;调用方法 `empty()`
&emsp;&emsp;示例：`d.empty();`

***

## 7.栈的大小
&emsp;&emsp;调用方法 `size()`
&emsp;&emsp;示例：`d.size();`

***

## 8.stack不能遍历

***

## 9.综合代码
```
#include <bits/stdc++.h>
using namespace std;

void print(stack<int> d)
{
    stack<int> tmp;
    while (d.size())
    {
        tmp.push(d.top());
        d.pop();
    }
    while (tmp.size())
    {
        cout << tmp.top() << ' ';
        tmp.pop();
    }
    cout << '\n';
}

int main()
{
    stack<int> d;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        d.push(x);
    }
    print(d);
    cout << d.top() << '\n';
    d.pop();
    print(d);
    return 0;
}
```