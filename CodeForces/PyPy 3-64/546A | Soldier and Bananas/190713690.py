k,n,w=[int(x) for x in input().split()]
if k*(w+1)*w//2<=n:
    print (0)
else:
    print(k*(w+1)*w//2-n)