def mergeTwoSortedArray(ll1,ll2,m1,n1):
    i_ll1=m1-1
    i_ll2=n1-1
    i_ll=m1+n1-1
    
    while(i_ll1>=0 and i_ll2>=0):
        if(ll1[i_ll1]>ll2[i_ll2]):
            ll1[i_ll]=ll1[i_ll1]
            i_ll1=i_ll1-1
            i_ll=i_ll-1
            #print(i_ll)
        else:
            #print(i_ll,i_ll2)
            ll1[i_ll]=ll2[i_ll2]
            i_ll2=i_ll2-1
            i_ll=i_ll-1
    #print(i_ll,i_ll2)       
    while(i_ll>=0):
        ll1[i_ll]=ll2[i_ll2]
        i_ll2=i_ll2-1
        i_ll=i_ll-1
        
            
    print(ll1)
    

l1=list(map(int,input("enter elements:").split()))
l2=list(map(int,input("enter elements:").split()))
m=len(l1)
n=len(l2)
if(len(l1)>len(l2)):
    for i in range(len(l2)):
        l1.append(0)
    print(l1)
    mergeTwoSortedArray(l1,l2,m,n)
else:
    for i in range(len(l1)):
        l2.append(0)
    mergeTwoSortedArray(l2,l1,n,m)
