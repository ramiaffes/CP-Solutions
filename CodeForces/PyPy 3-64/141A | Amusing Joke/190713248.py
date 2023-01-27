s1=input()
s2=input()
s3=input()
res1=list(s1+s2)
res2=list(s3)
if sorted(res1)==sorted(res2):
    print("YES")
else:
    print("NO")