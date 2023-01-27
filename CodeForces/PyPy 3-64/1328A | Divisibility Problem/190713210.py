t=int(input())
def fonction (a,b):
    if a%b==0:
        return 0
    else:
        return (b-a%b)
        
    
M=[]
for i in range(t):
    a,b=[int(x) for x in input().split()]
    M.append(fonction(a,b))
for k in M:
    print(k)