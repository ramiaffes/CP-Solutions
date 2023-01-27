M=[]
n=int(input())
def fonction(s):
    if  len(s)==1:
        return "YES"
    else:
        s="".join(sorted(list(s)))
        test=True
        i=0
        while (test==True) and (i<=len(s)-2):
            test=(ord(s[i+1])-ord(s[i]))==1
            i+=1
        if test==False:
            return "NO"
        else:
            return "YES"
        
        
    
for i in range(n):
    s=input()
    M.append(fonction(s))
for k in M:
    print(k)