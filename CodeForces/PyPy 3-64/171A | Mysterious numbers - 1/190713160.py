a,b=[int(x) for x in input().split()]
ch2=str(b)
res=a+int("".join(reversed(list(ch2))))
print(res)