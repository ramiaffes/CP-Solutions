n=int(input())
s=input()
def good(s,n):
    som=0
    for i in range(n):
        if s[i]=="1":
            som+=1
        else:
            som-=1
    return (som!=0)
        
if  good(s,n):
    print(1)
    print(s)
else:
    print(2)
    print(s[:len(s)-1],end=" ")
    print(s[len(s)-1])