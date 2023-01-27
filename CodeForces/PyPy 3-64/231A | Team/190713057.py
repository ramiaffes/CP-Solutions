n=int(input())
L=[]
for i in range(n):
     x,y,z=[int(x) for x in input().split()]
     L.append((x,y,z))
print(L.count((1,1,1))+L.count((0,1,1))+L.count((1,0,1))+L.count((1,1,0)))