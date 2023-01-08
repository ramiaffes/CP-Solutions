t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    som1=0
    som2=0
    d=0
    val2=0
    for c in s:
        if(c=='0'):
            val2+=1
    test=False
    if(n%2==1):
        if(s[n//2]=='0'):
            som1+=1
            val2-=1
            test=True
    if(val2>=2):
        if(test==False):
            som1+=((val2-2)//2+2)
            som2+=((val2-2)//2)
        else:
            som2+=((val2-2)//2+2)
            som1+=((val2-2)//2)
        
        
    
    
    
        
    if(som1>som2):
        print("BOB")
    elif(som1<som2):
        print("ALICE")
    else:
        print("DRAW")
            
        
        
        