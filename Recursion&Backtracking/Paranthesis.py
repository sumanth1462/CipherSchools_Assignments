def generate(left,right,s):
    if(left>right):
        return
    if(left==0 and right==0):
        print(s)
        return
    if(left>0):
        generate(left-1,right,s+"(")
        
        
    if(right>0):
        generate(left,right-1,s+")")
        
generate(3,3,"")
