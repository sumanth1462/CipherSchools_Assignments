def isExist(l1,tValue):
    #strat from right
    #if greater than target go left
    #if less than target go down
    i=0
    j=len(l1[0])-1
    while(i<len(l1) and j>=0):
        if(l1[i][j]==tValue):
            return True;
        if(l1[i][j]>tValue):
            j=j-1
        else:
            i=i+1 
    return False

n=int(input())
#target
m=int(input())
l1=[]
for i in range(n):
    l=list(map(int,input().split()))
    l1.append(l)
print(isExist(l1,m))
