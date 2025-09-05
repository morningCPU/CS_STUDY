# 常用类和基础API
## 1. String
### 1.1 构造器
1. public String()
2. public String(String orginal)
3. public String(char[] value)
4. public String(char[] balue,int offset,int count)
5. public String(byte[] bytes)
6. public String(byte[] bytes,String charseName)
### 1.2 String与基本数据类型之间的转换
1. int n = Interger.parseInt(s)
2. String s = n + "";
String s = String.valueOf(n);
### 1.3 String 与 Char[] 之间的转换
1. String s = new String(arr);
2. char[] arr = s.toCharArray();
### 1.4 String 与 Byte[] 之间的转换
1. String s = new String(arr);
2. Byte[] arr = s.getBytes();
### 1.5 常用方法
1. boolean ifEmpty()
2. int length()
3. String concat()
4. boolean equals(Object obj)
5. boolean equalsIgnoreCase(Object obj)
6. int compareTo(String string)
7. int compareToIgnoreCase(String string)
8. String toLowerCase()
9. String toUpperCase()
10. String trim()
11. public String intern()
### 1.6 查找
1. boolean contains(String string)
2. int indexOf(String string)
3. int indexOf(String string,int fromIndex)
4. int lastIndexOf()
5. int lastIndexOf(String String,int formIndex)
### 1.7 字符串截取
1. String substring(int beginIndex)
2. String substring(int beginIndex,int endIndex)
### 1.8 和字符/字符数组相关
1. char charAt(int index)
2. char[] toCharArray()
3. static String valueOf(char[] data)
4. static String valueOf(char[] data,int offset,int count)
5. static String copyValueOf(char[] data)
6. static String copyValueOf(char[] data,int offset,int count)
### 1.9 开头和结尾
1. boolean startsWith(String string)
2. boolean startsWith(String prefix,int toffset)
3. boolean endWith(String string)
### 1.10 替换
1. String replace(char oldChar,char newChar)
2. String replace(CharSequence target,CharSequence replacement)
3. String replaceAll(String regex,String replacement)
4. String replaceFirst(String regex,String replacement)












