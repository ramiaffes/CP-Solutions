def res(ch):
    sum1=0
    if ch.find("1")!=-1 and ch.find("0")!=-1:
         m=[i for i in range (len(ch)) if  ch[i]=="1" ]
         for  k in range(len(m)-1,0,-1):
             sum1+=(m[k]-m[k-1]-1)
    return sum1
        
   
       
        
        
    return sum1
n=int(input())
L=list()
for i in range(n):
    ch=input()
    L.append(res(ch))
 
for i  in range(len(L)):
    print(L[i])