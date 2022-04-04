for _ in range(int(input())):
    n,a = list(map(int,input().split()))
    s = input()
    res = 0
    k = 0
    st = s
    count = 0
    while((res <= a)):
        st = st[1:n] + st[0]
        # print(s,"  ",st)
        k+=1
        if st==s:
            count += k
            k = 0
            s = st
            res+=1
        
    print(count)