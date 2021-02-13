def isMeet(d1,d2,s1,s2):
    if(d1>d2 and s1>s2):
        print("they will not meet")
        return False
    if(d2>d1 and s2>s1):
        print("they will not meet")
        return False
    #assuming d1 will always be ahead in starting
    while(d1>=d2):
        #d2>d1
        if(d1==d2):
            print(d1)
            return true;
        d1=d1+s1
        d2=d2+s2
    return False
def usingRelative(d1,d2,s1,s2):
    if(d1>d2 and s1>s2):
        print("they will not meet")
        return False
    if(d2>d1 and s2>s1):
        print("they will not meet")
        return False
    D=d1-d2
    v=s1-s2
    if(D%v==0):
        return True
    return False
    
d1=6
d2=4
s1=6
s2=8
print(usingRelative(d1,d2,s1,s2))
