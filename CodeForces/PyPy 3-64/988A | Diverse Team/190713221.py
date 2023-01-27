n,k=[int(x) for x in input().split()]
L=[int(x) for x in input().split()]
R=[]
M=[]
for i in range(n):
    if L[i] not in M:
        R.append(i+1)
        M.append(L[i])
if len(R)>=k:
    print("YES")
    print(" ".join([str(x) for x in R[:k]]))
else:
    print("NO")