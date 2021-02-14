def binarySearch(l1,x):
    low=0 
    high=len(l1)-1
    while(low<=high):
        mid=(low+high)//2
        if(l1[mid]==x):
            return mid
        elif(l1[mid]>x):
            high=mid-1
        else:
            low=mid+1 
    return "not found"
l1=list(map(int,input().split()))#list of sorted elements
x=int(input()) #element to be searched
print(binarySearch(l1,x))
