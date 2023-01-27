n=int(input())
M=[]
D=[]
for i in range(n):
    s=input()
    M.append(s)
    if M.index(s)==i:
        D.append("NO")
    else:
        D.append("YES")
for k in D:
    print(k)