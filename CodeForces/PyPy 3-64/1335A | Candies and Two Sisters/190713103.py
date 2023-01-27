t=int(input())
M=[]
def fonction(n):
    if n<=2:
        return 0
    elif n%2==1:
        return n//2
    else:
        return n//2-1
        
    
for i in range(t):
    n=int(input())
    M.append(fonction(n))
for k in  M:
    print(k)