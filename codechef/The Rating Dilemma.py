for _ in range(int(input())):
    a = int(input())
    i = 1
    while True:
        val = (i*a) - (i*i)
        i+=1
        if(val) < 0:
            break
    print(val)