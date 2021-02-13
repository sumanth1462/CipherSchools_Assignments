l1=list(map(int,input().split()))
d={}
for i in range(len(l1)):
    if(l1[i] in d):
        d[l1[i]]=d[l1[i]]+1 
    else:
        d[l1[i]]=1 
for i,j in d.items():
    if(j==max(d.values())):
        if(j>len(l1)/2):
            print(i)
        else:
            print("No Majority Element")
