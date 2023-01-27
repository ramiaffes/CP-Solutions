s=input()
test=True
i=0
if len(s)==1:
    if s in {"a","o","u","i","e","n"}:
        print("YES")
    else:
        print("NO")
elif s[len(s)-1] not in {"a","o","u","i","e","n"}:
    print("NO")
else:
    while (test==True) and (i<=len(s)-2):
        test=(s[i+1]  in {"a","o","u","i","e"}) or ( s[i] in{"a","o","u","i","e","n"} )
        i+=1
    if test==True:
        print("YES")
    else:
        print("NO")
    