n,m=[int(x) for x in input().split()]
res=[]
M=[]
D=[]
for i in range(n):
    s=[x for x in input().split()]
    M.append(s[0])
    D.append(s[1])
for i in range(m):
    ch=[x for x in input().split()]
    res.append(" ".join(ch)+ " #"+M[D.index(ch[1].strip(";"))])
for k in res:
    print(k)