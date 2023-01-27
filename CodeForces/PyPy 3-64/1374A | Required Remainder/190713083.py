t=int(input())
import math
M=[]
def fonction(x,y,n):
    return ((n-y)//x)*x+y
    
for i in range(t):
    x,y,n=[int(x) for  x in input().split()]
    M.append(fonction(x,y,n))
for k in M:
    print(k)