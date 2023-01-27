t=int(input())
def fonction(n,M):
    if any((M.count(k)>=2 and (n-1-(M[::-1].index(k)))>(M.index(k)+1)) for k in set(M)):
        return "YES"
    else:
        return "NO"
M=[]          
    
for i in range (t):
    n=int(input())
    L=[int(x) for x in input().split()]
    M.append(fonction(n,L))
for k in M:
    print(k)