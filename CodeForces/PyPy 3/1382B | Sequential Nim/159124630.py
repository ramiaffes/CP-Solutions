t=int(input())
for i in range(t):
    n=int(input())
    test=0
    L=[int(x)for x in input().split()]
    d=0
    while(d<n)and(L[d]==1):
        test=1-test
        d+=1
    if(d==n):
        test=1-test
    if(test==0):
        print("First")
    else:
        print("Second")
        