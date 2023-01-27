def fonction(a,b,c):
    som=0
    if  a>0 :
        som+=1
        a-=1
    if b>0:
        som+=1
        b-=1
    if c >0:
         som+=1
         c-=1  
    if a>0 and b>0:
        som+=1
        a-=1
        b-=1
        if a==b==0 and c>1:
            som-=1
            a+=1
            b+=1
            
    if a>0 and  c>0 :
        som+=1
        a-=1
        c-=1
    if  b>0 and c>0:
        som+=1
        b-=1
        c-=1
    if a >0 and b>0 and c>0:
        som+=1
    return som
    
   
 
        
t=int(input())
L=[]
for i in range(t):
    a,b,c=[int(x) for x in input().split()]
    L.append (fonction(a,b,c))
 
 
 
  
for k in L:
    print(k)