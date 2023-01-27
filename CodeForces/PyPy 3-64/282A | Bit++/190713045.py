n=int(input())
som=0
for i in range(n):
    stat=input()
    if "-" in stat:
        som-=1
    else:
        som+=1
print(som)