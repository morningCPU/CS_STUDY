<h1 style = "text-align : center">queue</h1>

备注：要包含头文件 `<queue>`

## 1.作用
&emsp;&emsp;创建了一个先进先出的数据结构

***

## 2.格式
&emsp;&emsp;`queue<数据类型> 变量名;`
&emsp;&emsp;示例：`queue<int> d;`

***

## 3.入队
&emsp;&emsp;调用方法 `push()` O(1)
&emsp;&emsp;示例：`queue.push();`

***

## 4.出队
&emsp;&emsp;调用方法 `pop()` O(1)
&emsp;&emsp;示例：`queue.pop();`

***

## 5.队头
&emsp;&emsp;调用方法 `front()`
&emsp;&emsp;示例：`queue.front();`

***

## 6.队尾
&emsp;&emsp;调用方法 `back()`
&emsp;&emsp;示例：`queue.back();`

***

## 7.判断是否为空
&emsp;&emsp;调用方法 `empty()`
&emsp;&emsp;示例：`queue.empty();`

***

## 8.队列的大小
&emsp;&emsp;调用方法 `size()`
&emsp;&emsp;示例：`queue.size();`

***

<h1 style = "text-align : center">队列扩展</h1>

***

<h1 style = "text-align : center">priority_queue</h1>
<h2 style = "text-align : center">优先队列</h2>

## 1.作用
&emsp;&emsp;其实是创建了一个堆，默认是大根堆

***

## 2.格式
&emsp;&emsp;`priority_queue<数据类型> 变量名;`
&emsp;&emsp;示例：`priority_queue<int> d;`

***

## 3.入队
&emsp;&emsp;调用方法 `push()` O(logN)
&emsp;&emsp;示例：`d.push(2);` 

***

## 4.出队
&emsp;&emsp;调用方法 `pop()` O(logN)
&emsp;&emsp;示例：`d.pop();` 

***

## 5.取堆顶元素
&emsp;&emsp;调用方法 `top()` 
&emsp;&emsp;示例：`d.top();` 

***

## 6.判断是否为空
&emsp;&emsp;调用方法 `empty()`
&emsp;&emsp;示例：`queue.empty();`

***

## 7.队列的大小
&emsp;&emsp;调用方法 `size()`
&emsp;&emsp;示例：`queue.size();`

***

## 8.修改比较函数
+   方法一：
```
struct Compare{
    bool operator()(int a,int b)
    {
        return a > b;
    }
};
priority_queue<int,vector<int>,Compare> d;
```
+   方法二：用 `greater` (用包含头文件 <functional>)
```
priority_queue<int,vector<int>,greater<int>>;
```

***

<h1 style = "text-align : center">deque</h1>
<h2 style = "text-align : center">双端队列</h2>

和队列操作差不多，这里就简单介绍
+ 定义 `deque<数据类型> 变量名;`
+ 前入队 `d.push_front(2);`
+ 尾入队 `d.push_back(2);`
+ 插入 `d.insert(d.begin()+2,2);`
+ 前出队 `d.pop_front();`
+ 尾出队 `d.pop_back();`
+ 删除指定位置元素 `d.erase(d.begin() + 2);`
+ 删除指定范围元素 `d.erase(d.begin() + 2,d.end()-2);`
+ 清空 `d.clear();`
+ 队头 `d.front();`
+ 队尾 `d.back();`
+ 是否为空 `d.empty();`
+ 大小 `d.size();`

