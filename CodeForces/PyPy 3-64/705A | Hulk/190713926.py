n=int(input())
ch=""
for i in range(1,n):
    if i%2==1:
        ch+="I hate that "
    else:
        ch+="I love that "
if  n%2==0:
    ch+="I love it"
else:
    ch+="I hate it"
print(ch)
    
    