i=0
j=0
ch=""
num=0
num3=0
for x in reversed(input()):
    num+=(int(x)*(10**i))
    i+=1
for x in reversed(input()):
    num3+=(int(x)*(10**j))
    j+=1
num=str(num)
num3=str(num3)
num=num.zfill(i)
num3=num3.zfill(j)
for d in range(j):
    if num[d]==num3[d]:
        ch+="0"
    else:
        ch+="1"
print(ch)