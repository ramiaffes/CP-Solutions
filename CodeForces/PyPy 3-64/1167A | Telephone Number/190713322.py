t=int(input())
D=[]
for i in range(t):
    n=int(input())
    s=input()
    D.append((s,n))
for ( s ,n)in D:
    if s.rfind("8")==-1 or n<11:
        print("NO")
    elif  s.find("8")<=n-11:
        print("YES")
    else:
        print("NO")