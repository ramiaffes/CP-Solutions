s=input()
s=s.replace("WUB"," ")
while (s.endswith(" ")):
    s=s.rstrip()
while (s.startswith(" ")):
    s=s.lstrip()
print(s)