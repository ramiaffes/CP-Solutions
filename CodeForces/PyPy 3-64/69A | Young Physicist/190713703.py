n=int(input())
L=[]
M=[]
for i in range(n):
    L=[int(x) for x in input().split()]
    M.append(L)   
T=[M[j][0] for j in range(n)]
if sum(T)==0:
    T=[M[j][1] for j in range(n)]
    if sum(T)==0:
        T=[M[j][2] for j in range(n)]
        if sum(T)==0:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
    
else:
    print("NO")