# 循环结构

## 1.时间控制
```
import time
time.sleep(1)
```
示例：
```
import time
for _ in range(101) : #用不到的变量一般命名为 _
    print("Hello")
    time.sleep(1)
```

## 2.range
```
range(100)
range(100,2)
range(2,100,-1)
print(sum(range(101)))
```

***

## 3.while循环