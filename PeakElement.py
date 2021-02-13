l1=list(map(int,input().split()))
if(len(l1)==1):
    print(l1[0])
else:
    if(l1[0]>=l1[1]):
        print(l1[0])
    if(l1[len(l1)-1]>=l1[len(l1)-2]):
        print(l1[len(l1)-1])
    for i in range(1,len(l1)-1):
        if(l1[i]>=l1[i-1] and l1[i]>=l1[i+1]):
            print(l1[i])
