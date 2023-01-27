n,k=[int(x) for x in input().split()]
s=input()
res=[]
for  i in range(k):
    res.append(s.count(chr(ord("A")+i)))
print(min(res)*k)