n=int(input())
L=[int(x) for x in input().split()]
D=[1]
if n==1:
    print(1)
else:
    som=1
    for i in range(n-1):
         if L[i]<=L[i+1]:
             som+=1
             D.append(som)
         else:
             som=1
    print(max(D))