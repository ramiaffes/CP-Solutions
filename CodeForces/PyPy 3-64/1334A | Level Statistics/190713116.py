t=int(input())
D=[]
def fonction(M):
    if len(M)==1:
        if M[0][0]>=M[0][1]:
            return "YES"
        else:
            return "NO"
    if M[0][0]<M[0][1]:
        return "NO"
    else:
        test=True
        i=0
        while (test==True) and (i<len(M)-1):
             test=(M[i][0]<=M[i+1][0]) and  any([M[i+1][1]==M[i][1]+d for d  in range(0,M[i+1][0]-M[i][0]+1)])
             i+=1
        if test==False:
            return "NO"
        else:
            return "YES"
        
        
        
       
    
            
        
    
        
        
for i in range(t):
    M=[]
    n=int(input())
    for i in range(n):
        p,c=[int(x) for x in input().split()]
        M.append((p,c))
    D.append(M)
for k in D:
    print(fonction(k))