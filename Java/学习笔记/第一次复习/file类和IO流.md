# File类与IO流
## 1. java.io.File类的使用
### 1.1 构造器
1. public File(String pathname)
2. public File(String parent,Sttring child)
3. public File(File parent,String child)
### 1.2 常用方法
**获取文件和目录基本信息**
1. public Stirng getName()
2. public String getPaht()
3. public String getAbsolutePath()
4. public String getCanonicalPath()
5. public File get AbsoluteFile()
6. public String getParent()
7. public long length()
8. public long lastModified()
**列出目录的下一级**
1.  public String[] list()
2. public File[] listFiles()
3. 过滤器 FilenameFilter
```java
File[] subFiles = srcFile.listFiles(new FilenameFilter(){
    @Override
    public boolean accept(File dir,String name){
        return name.endwith(".jpg");
    }
});
```
**重命名**
1. public boolean renameTo(File dest)
**判断**
1. public boolean exists()
2. public boolean isDirectory()
3. public boolean isFile()
4. public boolean canRead()
5. public boolean canWrite()
6. public boolean isHidden()
**创建和删除**
1. public boolean createNewFile()
2. public boolean mkdir()
3. public boolean mkdirs()
4. public boolean delete()
## 2. IO流
