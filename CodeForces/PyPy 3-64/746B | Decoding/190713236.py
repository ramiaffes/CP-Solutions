n=int(input())
s=input()
som=n
ch=""
while(som!=0):
    if (som%2==1):
        ch=ch+s[n-som]
    else:
        ch=s[n-som]+ch
    som-=1
print(ch)