n,h=[int(x) for x in input().split()]
L=[int(x) for x in input().split()]
som=0
for k in L:
    if  k>h:
        som+=2
    else:
        som+=1
print(som)