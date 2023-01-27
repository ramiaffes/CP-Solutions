def fonction(ch):
    if len(ch)<=10:
        return ch
    else:
        return ch[0]+str(len(ch[1:len(ch)-1]))+ch[len(ch)-1]
 
 
 
 
n=int(input())
L=[]
for  i in range(n):
    ch=input()
    L.append(fonction(ch))
for k in  L:
    print(k)