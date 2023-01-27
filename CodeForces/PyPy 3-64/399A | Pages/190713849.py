n,p,k=[int(x) for x in input().split()]
L=[]
L.append("("+str(p)+")")
i=1
while (p-i>=1) and (i<=k):
    L.insert(0,(str(p-i)))
    i=i+1
if p-i+1!=1:
    L.insert(0,"<<")
 
j=1
while (p+j<=n) and (j<=k):
    L.append(str(p+j))
    j=j+1
if p+j-1!=n:
    L.append(">>")
for i in range (len(L)-1):
    print(L[i],end=" ")
print(L[len(L)-1])