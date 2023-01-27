n,m=[int(x) for x in input().split()]
L=[int(x) for x in input().split()]
L.sort()
i=0
M=[]
while (i+n<=m):
    M.append(max(L[i:i+n])-min(L[i:i+n]))
    i+=1
print(min(M))