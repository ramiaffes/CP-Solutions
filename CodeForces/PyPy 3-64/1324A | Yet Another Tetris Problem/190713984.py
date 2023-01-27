t=int(input())
M=[]
def fonction(L):
    L.sort()
    i=0
    test=True
    while test==True and (i<=n-1):
        test=(max(L)-L[i])%2==0
        i+=1
    if test==False:
        return "NO"
    else:
        return "YES"
    
for i in range(t):
    n=int(input())
    L=[int(x) for x in input().split()]
    M.append(fonction(L))
for k in M:
    print(k)