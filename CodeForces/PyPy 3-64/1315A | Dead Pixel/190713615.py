L=[]
def fonction(a,b,x,y):
    pr1=b*x
    pr2=b*(a-x-1)
    pr3=a*y
    pr4=a*(b-y-1)
    return max(pr1,pr2,pr3,pr4)
t=int(input())
for i in range(t):
    a,b,x,y=[int(x) for x in input().split()]
    L.append(fonction(a,b,x,y))
 
for k in L:
    print(k)