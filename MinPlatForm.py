def minPlat(arr,dep):
    platform=1
    total_plat=1
    i=1 
    j=0 
    while(i<len(arr) and j<len(dep)):
        if(arr[i]<=dep[j]):
            platform=platform+1 
            i=i+1 
        elif(arr[i]>dep[j]):
	        platform=platform-1
	        j=j+1

        if(platform>total_plat):
            total_plat=platform
    return total_plat
arr=[10.00,10.20,10.50]
dep=[10.50,11.00,11.20]
arr.sort()
dep.sort()
print(minPlat(arr,dep))
