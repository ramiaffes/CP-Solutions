n=int(input())
s=input()
res=[]
for d in range(n):
    if(s[d]=='8'):
        res.append(d)
val=0
val1=0
test=True
val2=len(res)-1
vis={}
val21=len(s)-1
for i in range(n):
    vis[i]=0
som=0
while((n-som)>11):
    if(test==True):
       while((val<n)and(s[val]=='8')):
           val+=1
       if(val==n):
           vis[res[val2]]=1
           val2-=1
           som+=1
       else:
            vis[val]=1
            val+=1
            som+=1
       
    else:
        if(val1==len(res)):
            vis[s[val21]]=1
            val21-=1
            som+=1
        else:
            vis[res[val1]]=1
            val1+=1
            som+=1
        
        
    test=not(test)
res33=""
for i in range(n):
    if(vis[i]==0):
        res33+=s[i]
if(res33[0]=='8'):
    print("YES")
else:
    print("NO")
    
            
        