t=int(input())
for i in range(t):
    n=int(input())
    L=[int(x)for x in input().split()]
    d1=0
    d2=n-1
    val1=0
    val2=0
    test=True
    test2=True
    while(d1<d2):
        if(L[d1]==L[d2]):
            d1+=1
            d2-=1
            continue
        else:
            val1=L[d1]
            val2=L[d2]
            break
    test=True
    test2=True
    d1=0
    d2=n-1
    while(d1<d2):
        if(L[d1]==L[d2]):
            d1+=1
            d2-=1
            continue
        elif(val1!=L[d1])and(val1!=L[d2]):
            test=False
            break
        elif(val1==L[d1]):
            d1+=1
        else:
            d2-=1
    d1=0
    d2=n-1
    while(d1<d2):
        if(L[d1]==L[d2]):
            d1+=1
            d2-=1
            continue
        elif(val2!=L[d1])and(val2!=L[d2]):
            test2=False
            break
        elif(val2==L[d1]):
            d1+=1
        else:
            d2-=1
        
    if(test==True)or(test2==True):
        print("YES")
    else:
        print("NO")
    
            
        