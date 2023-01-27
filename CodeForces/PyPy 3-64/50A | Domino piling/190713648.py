m,n=[int(x) for x in input().split()]
if m//2>=n//2:
    print((m//2)*n+(m%2)*(n//2))
else:
    print((n//2)*m+(n%2)*(m//2))