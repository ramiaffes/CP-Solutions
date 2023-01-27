import operator
n=int(input())
s=input()
dic=dict()
for i in range (n-1):
    if s[i]+s[i+1] in dic:
        dic[s[i]+s[i+1]]+=1
    else:
        dic[s[i]+s[i+1]]=1
print(max(dic.items(),key=operator.itemgetter(1))[0])