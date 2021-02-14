def first(l1,x):
    low=0 
    high=len(l1)-1
    res=-1
    while(low<=high):
        mid=(low+high)//2
        if(l1[mid]<x):
            low=mid+1 
        elif(l1[mid]>x):
            high=mid-1
        else:
            res=mid 
            high=mid-1 
    return res 
def last(l1,x):
    low=0 
    high=len(l1)-1
    res=-1
    while(low<=high):
        mid=(low+high)//2
        if(l1[mid]<x):
            low=mid+1 
        elif(l1[mid]>x):
            high=mid-1
        else:
            res=mid 
            low=mid+1 
    return res 

            

l1=list(map(int,input().split()))
x=int(input())
print(first(l1,x))
print(last(l1,x))
