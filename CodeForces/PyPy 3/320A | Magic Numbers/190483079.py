n=input()
i=0
test=True
while(i<=(len(n)-3))and(test==True):
    test=False
    if(n[i:i+3]=='144'):
        test=True
        i+=3
    elif (n[i:i+2]=='14'):
        test=True
        i+=2
    elif(n[i:i+1]=='1'):
        test=True
        i+=1
    else:
        continue
if(test==False):
    print("NO")
else:
    if(i==len(n)):
        print("YES")
    elif(i==len(n)-1):
        if(n[i:i+1]=='1'):
            print("YES")
        else:
            print("NO")
    else:
        if(n[i:i+2]=='14')or(n[i:i+2]=='11'):
            print("YES")
        else:
            print("NO")