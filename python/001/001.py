def yu(s):
    tmp = bool(int(s[len(s) - 1]) & 1)
    if tmp:
        return '1'
    else :
        return '0'
    
def div(s):
    tmp = 0
    res = ""
    for i in range(0,len(s)):
        tmp = int(s[i]) + tmp * 10
        if tmp < 2 and i == 0:
            continue
        res += str(tmp // 2)
        tmp %= 2
    return res

res = ""
s = str(input())
while s != "":
    res = yu(s) + res
    s = div(s)
print(res)