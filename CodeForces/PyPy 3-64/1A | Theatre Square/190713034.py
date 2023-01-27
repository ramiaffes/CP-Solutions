n,m,a=[int(x) for x in input().split()]
p1=n//a
if n%a!=0:
    p1+=1
p2=m//a
if m%a!=0:
    p2+=1
print(p1*p2)