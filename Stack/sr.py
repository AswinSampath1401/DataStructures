for _ in int(input()):
    arr=str(input()).split()

    for x in range(len(a)-1,-1,1):
        if(a[x]==0):
            print("".join(arr[0:x+1])+"0")
        else:
            print(a[x]*pow(10,len(a)-1-x))
