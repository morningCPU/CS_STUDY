+ 三引号 `""" """` 可以忽略换行,它同时也作为注释使用
+ 注释 `#` / `""" """`
+ 数据类型：str,int,float,bool,NoneType,list,dict,tuple
+ str
```
len()
"hello"[3] #从0开始
```
+ bool
```
True 
Flase #第一个字母要大写
```
+ NoneType
```
None
```
+ 用 `type` 可以查看类型
+ 输入 `input()` 返回字符串
+ 条件语句
```
if :
else : #要加冒号
elif : #else : if :
```
+ 逻辑运算符
```
and 
or
not
```
+ 列表
```
list
a = [1,2,3,4,5] # 用中括号表示列表
a.append(...)
a.remove(...)
# 可以包含多种类型的数据
len(a)
a[2]
max(a)
min(a)
sorted(a) # 不改变原来的列表
```
+ 字典
```
字典里只能放不可变的元素，所以不能放list
dict
a = {"no1" : 1,"no2" : 2} #键值对的形式
a[key]
in : "no1" in a # 判断一个键是否存在
del 删除
```
+ 元组
```
tuple
a = ("sdfa","dfadfa")
```
+ for
```
#通过迭代进行
for a in b : #注意冒号
```
+ range(st,ed,step)
```
# 用于生成序列
#不包括 ed
```
+ while
```
while :
```
+ 格式化字符串
```
"fsadfa{0}sdafasd{1}".format(a,b)
{}里的可以是第几个
dict : "{a}".format(a = "No1")
格式化选项 : {:5.2f}.format(13212.3413421)
f"sadfasd{a}fasd{b}"
```
+ def name():
+ import
  from ... import ...
  form ... import *
  pypi.org 找第三方库
+ class name : 
```
class CuteCat:
    def __init__ (self):#构造函数
        self.name = "dfsafsa"
```
+ 继承
```
class Cut(父类)
super().__init__()
```
+ 文件
```
f = open("url,"r+/w/a",encoding = "utf-8")
print(f.read(10)) #读10个字节
f.readline()
f.readlines() # 返回列表
f.close()
with open() as f
  sadfasd
  sdfasf
f.wirte()
```
+ 错误类型
```
IndexError
ZeroDivisionError
FileNotFoundError
TypeError

try:

except ValueError:

except ZeroDivisionError:

except :

else :

finally:
```
+ 测试
```
assert bool
unittest
```
+ lambda
```
lambda a,b : a+b
```