ch1=input()
ch2=input()
res=""
s=input()
for i in range(len(s)):
    if (s[i].isalpha()==False):
        res+=s[i]
    elif s[i].islower() :
        res+=ch2[ch1.index(s[i])]
    else:
        res+=ch2[ch1.index(s[i].lower())].upper()
print(res)