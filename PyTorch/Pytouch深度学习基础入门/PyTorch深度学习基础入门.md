# PyTorch

+ 由 Facebook 主导开发的深度学习框架
1.学习 PyTorch 的基础语法
2.了解 Autograd 自动求导机制
3.利用 PyTorch 构建可用于图像分类任务的人工神经网络

***

## 1.张量(Tensors)

+ 与多维数组类似
+ 特点是可以用GPU进行计算

(1) **`torch.empty()`**
返回填充了未初始化数据的张量
```
import torch
torch.empty(5,3)
```
(2)**`torch.rand()`**
创建一个随机初始化的矩阵
```
torch.rand(3,5)
```
(3)**`torch.zeros()`**
创建一个 0 填充的矩阵
可以指定数据类型
```
torch.zeros(5,3,dtype = torch.long)
```
(4)`torch.tensor()`
创建 Tensor 并使用现有数据初始化
```
torch.tensor([[1,2,3],[4,5,6],[7,8,9]])
#注意只能传入一个列表
```
(5)`x.new_ones()`
根据现有张量创建新张量
```
x = x.new_ones(5, 3, dtype=torch.double)
```
(6)`torch.randn_like()`
覆盖 dtype，对象的 size 是相同的，只是值和类型发生了变化
```
x = torch.randn_like(x, dtype=torch.float)
```
(7)`.size()`
获取张量的 size
```
x.size()
```















