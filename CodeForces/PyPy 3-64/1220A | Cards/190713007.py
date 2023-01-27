n=int(input())
ch=input()
ph=""
for  i in range(ch.count("n")):
    ph=ph+"1"+" "
for i in range(ch.count("z")):
    ph=ph+"0"+" "
ph.rstrip(" ")
 
print(ph)