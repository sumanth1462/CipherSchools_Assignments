def sort(l1):
    left=0
    right=len(l1)-1 
    mid=0
    
    while(mid<=right):
        if(l1[mid]==0):
            temp=l1[left]
            l1[left]=l1[mid]
            l1[mid]=temp 
            left=left+1 
            mid=mid+1 
        elif(l1[mid]==1):
            mid=mid+1 
        else:
            temp=l1[mid]
            l1[mid]=l1[right]
            l1[right]=temp 
            right=right-1 
l1=[0, 2, 1, 1, 2, 1, 0, 0, 2, 1, 0, 1, 2, 0, 0, 1, 2
]
sort(l1) 
for i in range(len(l1)):
    print(l1[i])
