n=int(input())
res=[]
L=[int(x) for x in input().split()]
for i in range(len(L)):
    res.append(L.index(i+1)+1)
for k in range (len(res)-1):
    print(res[k],end=" ")
print(res[len(res)-1])