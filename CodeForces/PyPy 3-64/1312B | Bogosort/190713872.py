t=int(input())
M=[]
def fonction(L):
   D=[i+1-L[i] for i in range(len(L))]
   if len(D)==len(set(D)):
      return L
   else:
      H=sorted(L,reverse=True)
      return H
   
   
   
for i in range (t):
   n=int(input())
   L=[int(x) for x in input().split()]
   M.append(fonction(L))
for k in M:
   for i in range(len(k)-1):
      print(k[i],end=" ")
   print(k[len(k)-1])