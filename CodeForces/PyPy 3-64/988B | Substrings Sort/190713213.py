n=int(input())
M=[]
for i in range(n):
    M.append(input())
M.sort(key = len)
i=0
test=True
while (i<=n-2) and (test==True):
    test=M[i] in M[i+1]
    i+=1
if test ==False:
    print("NO")
else:
    print("YES")
    for k in M:
        print(k)