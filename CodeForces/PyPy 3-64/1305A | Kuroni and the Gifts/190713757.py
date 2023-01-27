t=int(input())
M,L=[],[]
for i in range(t):
    n=int(input())
    L=[int(x) for x in  input().split()]
    M=[int(x) for x in input().split()]
    if len(L)==1 and len(M)==1:
        for k in L:
            print(k)
        for k in M:
            print(k)
    else:
        res1=sorted(L)
        res2=sorted(M)
        for i in range  (len(res1)-1):
            print(res1[i],end=' ')
        print(res1[len(res1)-1])
        for k in range (len(res2)-1):
             print(res2[k],end=' ')
        print(res2[len(res2)-1])
    