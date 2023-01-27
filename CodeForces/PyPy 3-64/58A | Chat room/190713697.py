s=input()
if "h" in s and s!="h":
    s=s[s.index("h")+1:]
    if "e" in s and s!="e":
        s=s[s.index("e")+1:]
        if "l" in s and s!="l":
            s=s[s.index("l")+1:]
            if "l" in s and s!="l":
                s=s[s.index("l")+1:]
                if "o"in s :
                    print("YES")
                else:
                    print("NO")
                    
                    
            else:
                print("NO")
                
        else:
            print("NO")
            
    else:
        print("NO")
else:
    print("NO")