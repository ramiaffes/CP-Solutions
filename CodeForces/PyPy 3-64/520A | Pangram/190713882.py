 
n=int(input())
ch=input().lower()
d=set()
for i in range(26):
   d.add(chr(ord("a")+i))
if d.issubset(set(ch)):
   print("YES")
else:
   print("NO")