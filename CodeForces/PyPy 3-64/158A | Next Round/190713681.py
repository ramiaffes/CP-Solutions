n,k=[int(x) for x in input().split()]
L=[int(x) for x in input().split()]
 
if L[k-1]==0:
    print(len(L[:L.index(L[k-1])]))
elif k==1:
    print(L.count(L[k-1]))
else:
    print(L.count(L[k-1])+len(L[:L.index(L[k-1])]))