n=int (input())
i=1
test=False
while(i<=n) and  (test==False):
    test=(n%i==0)and(set(str(i)).issubset({'4','7'}))
    i+=1
if test==True:
    print("YES")
else:
    print("NO")