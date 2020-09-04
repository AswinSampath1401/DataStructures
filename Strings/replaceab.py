def fun(s):  
    count=1
    while(True):
        s=s.replace("ab","bba")
        print(s)
        if(s.find("ab")==-1):
            break
        count+=1
    return count
print(fun("aab"))
