t=int(input())
M=[]
def fonction(L,n):
    res=[i%2 for i in L]
    if 0 not in res:
        if n>=2:
            return (2,(1,2))
        else:
            return -1
    else:
        return (1,(res.index(0)+1,))
    
for i in range(t):
    n=int(input())
    L=[int(x)for x in input().split()]
    M.append(fonction(L,n))
for k in M:
    if k==-1:
        print(k)
    else:
        print(k[0])
        print(" ".join([str(x) for x in k[1]]))