n,m=[int(x) for x in input().split()]
L=[]
for i in range(n):
    ch=input()
    L.append(ch)
ph=""
s=set()
for k in L:
    if k==k[::-1]:
        ph+=k
        s.add(k)
        break
for k in L:
    if (k[::-1] in L) and (k[::-1]!=k)and (k[::-1] not in s):
        ph=k+ph+k[::-1]
        s.add(k)
    else:
        pass
print(len(ph))
if ph!="":
    print(ph)