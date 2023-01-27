def fonction(n):
    if n%10!=0:
        return n-1
    else:
        return n//10
n,k=[int(x) for x in input().split()]
for i in range(1,k+1):
    n=fonction(n)
print(n)