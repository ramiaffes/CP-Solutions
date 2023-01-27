n,m=[int(x) for x in input().split()]
M=[]
som=0
for i in range(n):
    M.append(input())
D=[int(x) for x in input().split()]
for j in range(m):
    som1=0
    som2=0
    som3=0
    som4=0
    som5=0
    for i in range(n):
        if M[i][j]=="A":
            som1+=1
        elif M[i][j]=="B":
            som2+=1
        elif M[i][j]=="C":
            som3+=1
        elif M[i][j]=="D":
            som4+=1
        else:
            som5+=1
    som+=max(som1,som2,som3,som4,som5)*D[j]
print(som)