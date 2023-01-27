 
n=int(input())
s=input()
while "xxx" in s:
    s=s.replace("xxx","xx")
 
print(n-len(s))