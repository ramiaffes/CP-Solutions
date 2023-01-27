 
t=int(input())
M=[]
def fonction(s):
    if len(set(s))==1:
        return -1
    else:
        return "".join(sorted(s))
for i in range(t):
    M.append(fonction(input()))
for k in M:
    print(k)