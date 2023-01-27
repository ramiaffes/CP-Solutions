n=int(input())
L=[]
for i in range(n):
    p,q=[int(x) for x in input().split()]
    if q-p >=2:
        L.append(q-p)
    
print(len(L))   