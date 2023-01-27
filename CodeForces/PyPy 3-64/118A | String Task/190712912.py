def fonction(ch):
    p="."
    s={"A", "O", "Y", "E", "U", "I"}
    for k in ch :
        if k.upper() not in s:
            p+=(k.lower()+".")
    return  p[:len(p)-1]
ch=input()
print(fonction(ch))
    