ch=input()
if ch.count("+")==0:
    print(ch)
else:
    L=ch.split("+")
    L.sort()
    L="+".join(L)
    print(L)