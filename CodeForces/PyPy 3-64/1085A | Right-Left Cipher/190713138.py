t= list(input())
s=""
if len(t)%2==0:
    pass
else:
    s+=t.pop(0)
i=0
while(i<len(t)//2):
    s=t.pop(len(t)-1-i)+s
    s=t.pop(i)+s
print(s)