# 列表

## 1.随机数
```
import random
i = random.randrange(1,7) #同样是不包括最后一个数
```

## 2.可以将其他序列转换为列表
```
a = list("dsafads")
b = list(range(1,7))
#注意是小括号
```

## 3.列表的运算
+ `+`
+ `*`
+ `in`
```
a = list[1,2,3,4,5,6]
print(1 in a) #True
print(7 in a) #False 
```
+ `not in`
+ `[]`索引
注意正向从 `0` 开始，反向从 `-1` 开始
+ 切片 
```
[st:ed:stride]
```
st = 0,ed = N,stride = 1可以省略
还能进行修改
```
a[1:3] = ['x','o']
```
+ `>` `<` `==` `!=` `>=` `<=`

## 4.遍历
