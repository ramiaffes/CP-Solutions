n=int(input())
L=[int(x) for x in input().split()]
L.sort()
i=n-1
test=False
while (i>=0) and (test==False):
    test=sum(L[:i])<sum(L[i:])
    i-=1
print(len(L[i+1:]))