for _ in range(int(input())):
    x,y,a,b = list(map(int,input().split()))

    val = list(set([a,b]))
    count =2
    if x in val:
        count-=1
    if y in val:
        count-=1
    print(count)