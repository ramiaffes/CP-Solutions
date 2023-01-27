t=int(input())
L=[]
def fonction(a,b):
    if a==b:
        return 0
    elif b>a:
        if (b-a)%2==0:
            return 2
        else:
            return 1
    else:
        if (a-b)%2==0:
            return 1
        else:
            return 2
            
for i in range(t):
    a,b=[int(x) for x in input().split()]
    L.append(fonction(a,b))
for k in L:
    print(k)