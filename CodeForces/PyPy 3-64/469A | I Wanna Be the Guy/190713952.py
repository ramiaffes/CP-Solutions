n=int(input())
L=[int(x) for x in input().split()]
M=[int(x) for x in input().split()]
s=set()
s.update(L[1:])
s.update(M[1:])
if len(s)==n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")