# 字符串

+ 输出原始字符串
使用 `r` 或 `R`
```
print(r"dsfasd\n\t")
s = r'fsadf\tsafds\t'
print(s)
```

+ 字符串特殊表示
`\141` : 八进制表示
`\x61` : 十六进制表示
`\u9a86` : Unicode 编码

+ 字符串运算
`+` `*` `[]` `[:]`

+ 可以直接进行比较

+ 成员运算
`in` `not in`
```
s = 'adfsadfasdf'
print('fs' in s)
```

+ 获取字符串长度
`len()`

+ 字符串的方法
1.`s.capitalize()` 单词首字母大写
2.`s.title()` 字符串单词的每个首字母大写
3.`s.supper()` 大写
4.`s.lower()` 小写

+ 查找
`s.find(str,st)` `s.index(str,st)`
find找不到会返回-1，index找不到会报错
```
s.find('sr',5)
s.index('sr',5)
```

+ 性质判断
1.`s.startswith(str)` 是否以字符串 `str` 开头
2.`s.endswith(str)` 是否以字符串 `str` 结尾
3.`s.isdigit()` 数字 
4.`s.isalpha()` 字母
5.`s.isalnum()` 数字和字母

+ 格式化
1.`s.center(width,str)`
2.`s.rjust(width,str)`
3.`s.ljust(width,str)`
4.`zfill(width)` 左侧补零

+ 修剪操作
```
s = '   sfasdadsf    '
print(s.strip())
s2 = '~你好，世界~'
print(s2.lstrip('~'))  # 你好，世界~
print(s2.rstrip('~'))  # ~你好，世界
```

+ 替换
`s.replace(str,str,num)`

+ 拆分与合并
```
s = 'I love you'
words = s.split()
print(words)            # ['I', 'love', 'you']
print('~'.join(words))  # I~love~you

s = 'I#love#you#so#much'
words = s.split('#')
print(words)  # ['I', 'love', 'you', 'so', 'much']
words = s.split('#', 2)
print(words)  # ['I', 'love', 'you#so#much']
```

+ 编码和解码
`encode` 编码
`decode` 解码
```
a = '骆昊'
b = a.encode('utf-8')
c = a.encode('gbk')
print(b)                  # b'\xe9\xaa\x86\xe6\x98\x8a'
print(c)                  # b'\xc2\xe6\xea\xbb'
print(b.decode('utf-8'))  # 骆昊
print(c.decode('gbk'))    # 骆昊
```