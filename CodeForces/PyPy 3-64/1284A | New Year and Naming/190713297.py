n,m=[int(x) for x in input().split()]
L=[x for x in input().split()]
M=[x for x in input().split()]
q=int(input())
res=[]
M=M*n
L=L*m
for i in range(q):
    y=int(input())
    y=y%(n*m)
    res.append(L[y-1]+M[y-1])
for k in res:
    print(k)