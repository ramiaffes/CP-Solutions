n=int(input())
som=0
while(n>=100):
    som+=1
    n-=100
while (n>=20):
    som+=1
    n-=20
while(n>=10):
    som+=1
    n-=10
while(n>=5):
    som+=1
    n-=5
while(n>=1):
    som+=1
    n-=1
print(som)