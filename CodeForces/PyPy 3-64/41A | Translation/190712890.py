ch1=input()
ch2=input()
def isreveresed(ch1,ch2):
    if len(ch1)==0:
        return True
    elif len(ch1)!=len(ch2):
        return False
    elif (ch1[len(ch1)-1]==ch2[0])and (ch1[0]==ch2[len(ch2)-1]):
        return isreveresed(ch1[1:len(ch1)-1],ch2[1:len(ch1)-1])
    else:
        return False
if isreveresed(ch1,ch2):
    print("YES")
else:
    print("NO")