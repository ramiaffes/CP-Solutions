t=int(input())
d=[]
def  fonction(a,b,c):
    test="Yes"
    for i in range(len(a)):
        if c[i]!= a[i] and c[i]!=b[i]:
            test="No"
            break
    return test
    
for i in range(t):
    a=input()
    b=input()
    c=input()
    d.append(fonction(a,b,c))
for k in d:
    print(k)