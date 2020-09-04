def fun(s):

    while(s.find("100")!=-1):
        print(s)
        s= s.replace("100","")

    print(s)
    return len(s)


s= "1011100000100"
print(fun(s))