 
n=int(input())
D=[]
som=0
D.append(som)
for i in range(n):
    a,b=[int(x) for x in input().split()]
    som-=a
    D.append(som)
    som+=b
    D.append(som)
print(max(D))