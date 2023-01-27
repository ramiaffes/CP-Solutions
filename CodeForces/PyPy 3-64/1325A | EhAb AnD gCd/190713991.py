t=int(input())
M=[]
def fonction(x):
    return x-1,1
    
for i in range(t):
    x=int(input())
    M.append(fonction(x))
for k in M:
    print(" ".join([str(x) for x in k]))