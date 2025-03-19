<h1 style = "text-align:center">pair</h1>

备注：要包含头文件 `<utility>`

## 1.作用
&emsp;&emsp;用于表示一对值的组合

***


## 2.格式
&emsp;&emsp;`pair<第一个值的类型，第二个值的类型> 变量名;`
&emsp;&emsp;举例：`pair <int,int> d;`

***

## 3.初始化
&emsp;&emsp; `pair<int,int> d (1,2);`

***

## 4.调用方法
举例：
```
pair <int ,int> d (1,2);//{1,2}也可以
//区别是{}比()更加严格
cout << d.first << '\n';//调用第一个值,即1
cout << d.second << '\n';//调用第二个值,即2
```

***

## 5.pair可以嵌套使用
&emsp;&emsp;`pair<int,pair<int,int>> d(1,make_pair(2,3));`
+ make_pair(2,3)的作用是快速构造pair
+ `pair<int,pair<int,int>> d{1,{2,3}};` 也可以

***

## 6.pair的比较规则
&emsp;&emsp;会先比较 `pair.first` 中的内容
&emsp;&emsp;`pair.first` 相同的情况下再比较 `pair.second` 中的内容
