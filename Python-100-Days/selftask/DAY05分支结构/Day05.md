# 分支结构

## 1.写一个区间
```
1<= x and x < 10
1<= x < 10
```

***

## 2.多路分支
`match-case`
示例：
```
match status:
    case 400:print("001")
    case 500:print("002")
    case 600:print("003")
    case 700:print("004")
    case 800 | 900:print("005") #匹配多个选项
    case _:print("006")
```