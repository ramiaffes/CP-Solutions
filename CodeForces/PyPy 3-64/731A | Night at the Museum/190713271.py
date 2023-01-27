s=input()
som=0
res=ord(s[0])-ord("a")
som+=min(res,26-res)
for i in range(len(s)-1):
    res=abs(ord(s[i+1])-ord(s[i]))
    som+=min(res,26-res)
print(som)