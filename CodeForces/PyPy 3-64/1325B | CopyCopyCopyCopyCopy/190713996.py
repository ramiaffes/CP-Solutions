t=int(input())
M=[]
def fonction(n,L):
    return len(set(L))
    
for i in range(t):
    n=int(input())
    L=[int(x) for x in input().split()]
    M.append(fonction(n,L))
for k in M:
    print(k)