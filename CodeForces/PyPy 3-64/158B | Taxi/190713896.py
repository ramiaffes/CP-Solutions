n=int(input())
L=[int(x) for x in input().split()]
som=L.count(4)
som+=L.count(3)
d=L.count(1)
if L.count(3)==0:
    pass
elif L.count(1)>=L.count(3):
    d=L.count(1)-L.count(3)
else:
    d=0
som+=L.count(2)//2
som+=L.count(2)%2
if L.count(2)==0:
    pass
        
        
    
elif  d>=(L.count(2)%2)*2:
    d=d-(L.count(2)%2)*2
else:
    d=0
som+=d//4
som+=(d%4)//3
som+=((d%4)%3)//2
som+=((d%4)%3)%2
 
print(som)