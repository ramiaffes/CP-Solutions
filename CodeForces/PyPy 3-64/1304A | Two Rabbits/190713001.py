n=int(input())
L=list()
for i in range(n):
    x,y,a,b=[int(x) for x in input().split()]
    L.append((x,y,a,b))
for (x,y,a,b) in L:
    
    if  (y-x)%(a+b)==0:
        print((y-x)//(a+b))
    else:
        print(-1)