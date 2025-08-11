def f(n):
    if a[n] != 0:
        return a[n]
    if n == 1 or n == 2:
        a[n] = 1
        return a[n]
    a[n] = f(n - 1) + f(n - 2)
    return a[n]

n = int(input("请输入一个正整数："))
a = [0] * (n + 1) 
print(f(n))