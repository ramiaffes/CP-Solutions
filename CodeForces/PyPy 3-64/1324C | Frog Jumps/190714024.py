t=int(input())
M=[]
def fonction(s):
    if 'L' not in s:
        return 1
    elif 'R' not in s:
        return len(s)+1
    else:
        L=s.split("R")
        return len(max(L))+1
for i in range(t):
    s=input()
    M.append(fonction(s))
for k in M:
    print(k)
        