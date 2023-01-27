 
n=int(input())
ch=input()
somT=0
i=0
while (i<=len(ch)-2) :
    som=0
    test=ch[i]==ch[i+1]
    while (test==True )and( i<=len(ch)-3):
        i+=1
        som+=1
        test=(ch[i]==ch[i+1])
    if test==True:
        som+=1
    somT+=som
    i+=1
print(somT)      
        