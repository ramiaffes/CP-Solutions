n=int(input())
L=[int(x) for x in input().split()]
L.sort()
for k in range(n-1):
    print(L[k],end=" ")
print(L[n-1])
        