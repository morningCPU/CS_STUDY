# 列表

## 1.添加元素
(1)`append(value)`
(2)`insert(pos,value)`
```
a = []
a.append(1)
a.insert(0,3)
```

***

## 2.删除
删除元素前最好先判断删除是否合法
(1)`.remove(value)` 
删除指定元素,如果有多个相同的 `value` ,之后删除一个
(2)`.pop([pos])` 
默认是最后一个，可以指定位置，有返回值
(3)`.clear()`
清空
(4)`del` 这是一个关键字
```
del a[2]
```
+ `del` 和 `.pop` 功能相同，不同之处是del不会有返回值，但是性能更好

***

## 3.查找所在位置
`.index(value,[st])`

***

## 4.查看频次
`.count(value)`

***

## 5.排序
`.sort()`

***

## 6.反转
`.reverse()`

***

## 7.列表生成式
原本：
```
items = []
for i in range(1,100):
    if i % 3 == 0 or i % 5 == 0:
        item.append(i)
for i in items:
    print(i,end = ' ')
print();
```
可以写为：
```
items = [x for i in range(1,100) if i % 3 == 0 or i % 5 == 0]
for i in items:
    print(i,end = ' ')
print();
```
列表生成式的逻辑
`a = [expression for item in iterable if condition]`
通过 `item` 遍历 `iterable` 
将符合条件 `condition` 的 `item` 代入 `expression` 
计算出结果后放入列表
+ 注意式子里面没有冒号

***

## 8.列表的嵌套
```
a = [[1,2,3],[4,5,6]]
```

***

## 9.格式化输出
```
print(f'{i:char[</>/^] num2.num3}')
```
+ num1设置填充的东西
+ <左对齐，>右对齐，^居中对齐
+ num2 宽度
+ num3 小数点位数
```
print(f'\033[031m{ball:^4d}\033[0m')
```
+ \033[0m 恢复默认格式
0 默认格式
1 高亮
5 闪烁
7 反显
+ 31 颜色
30 黑色
31 红色
32 绿色
33 黄色
34 蓝色

***

## 10.random库
+ `sample(list,num)` 无放回随机抽样
+ `choice(list)` 随机抽取一个元素
+ 不一定是 list

***

## 11.rich库
+ 第三方库








