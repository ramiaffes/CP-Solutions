t=int(input())
M=[]
    
def fonction(n,L):
    if max(L)>=2*n:
        return -1
    elif len(set(L))!=len(L):
           return -1
    else:
        res=list()
        D=list()
        for k in L:
            j=k
            ra=[D[i][1] for i in range(len(D))]
            while(( j in ra) or (j in L)) and (j<=2*n):
                j+=1
            D.append((k,j))
            res.append(k)
            res.append(j)
        if sorted(res)==[k for k in range(1,2*n+1)]:
            return res
        else:
            return -1
                
    
 
for i in range(t):
    n=int(input())
    L=[int(x) for x in input().split()]
    M.append(fonction(n,L))
for k in M:
    if type(k)==list:
        dh=" ".join([str(i) for i in k])
        for x in dh.split()[:-1]:
            print(int(x) , end =" ")
        print(int(dh.split()[-1]))
        
    else:
        print(k)