n=int(input())
L=[int(x) for  x in input().split()]
som=0
i=0
if L[0]%2!=L[1]%2 and L[1]%2==L[2]%2:
    print(1)
else:
    while (som%2==0) and (i<n-1):
        som=L[i]+L[i+1]
        i+=1 
    print(i+1)