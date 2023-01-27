s=input()
som=0
for i in range(len(s)):
    if s[i]=="a":
        som+=1
    else:
        som-=1
if som>0:
    print(len(s))
else:
    print(len(s)+som-1)