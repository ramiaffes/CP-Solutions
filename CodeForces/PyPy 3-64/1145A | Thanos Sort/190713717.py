 
n=int(input())
def fonction(L):
    if len(L)==1:
        return 1
    elif sorted(L)==L:
        return len(L)
    else:
       m=fonction(L[:(len(L)//2)])
       d=fonction(L[(len(L)//2):])
       return max(m,d)
 
L=[int(x) for x in input().split()]
print(fonction(L))