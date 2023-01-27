t=int(input())
M=[]
def fonction(n,a,b):
    s=""
    s1=""
    while len(s1)<a:
         for i in range(b):
             s1+=chr(97+i)
             if len(s1)==a:
                 break
    while (len(s)<n):
        for i in range(len(s1)):
            s+=s1[i]
            if len(s)==n:
                break
        s1=s1[0]+s1[1:len(s1)-1]+s1[len(s1)-1]
    return s
    
        
            
        
   
    
   
for i in range(t):
    n,a,b=[int(x) for x in input().split()]
    M.append(fonction(n,a,b))
for k in M:
    print(k)