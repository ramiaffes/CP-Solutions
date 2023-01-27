L=[]
num=0,0
for i in range(1,6):
    x,y,z,m,d=[int(x) for x in input().split()]
    if  x==1:
        num=(1,i)
    elif y==1:
        num=(2,i)
    elif z==1:
        num=(3,i)
    elif m==1:
        num=(4,i)
    elif d==1:
        num=(5,i)
    else:
        pass
    L.append([x,y,z,m])
print(abs(num[1]-3)+abs(num[0]-3))
 