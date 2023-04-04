lst = [0,1,0,1,1,1,1,0]
count_0 = 0
count_1 = 0
for i in lst:
    if i == 0:
        count_0 +=1
    else:
        count_1 += 1

lst = []
while(count_0 != 0):
    lst.append(0)

    count_0 -=1

while(count_1 != 0):
    lst.append(1)

    count_1 -=1

print(lst)



