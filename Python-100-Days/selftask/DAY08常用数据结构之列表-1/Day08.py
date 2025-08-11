import random

a = [0] * 7

for _ in range(6000):
    num = random.randrange(1,7)
    a[num] += 1
for i in range(1,7):
    print(a[i],end = ' \n'[i == 6])