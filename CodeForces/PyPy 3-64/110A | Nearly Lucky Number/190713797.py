n=int(input())
m=str(n).count("4")+str(n).count("7")
if set(str(m)).issubset({"4","7"}):
    print("YES")
else:
    print("NO")