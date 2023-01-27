ch=input()
if ch[1:].isupper() or (len(ch)==1) :
    L=list(ch)
    for i  in  range(len(L)):
        if L[i]==L[i].upper():
            L[i]=L[i].lower()
        else:
            L[i]=L[i].upper()
    print("".join(L))
else:
    print(ch)