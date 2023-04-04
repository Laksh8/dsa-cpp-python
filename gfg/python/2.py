lst = [0,1,1,1,0,1,1,0,0]
lst = [1,0,1,1,1,1,0,1,0,1,0,1]


flag = False
count = 0
for index,i in enumerate(lst):

    if i == 1 and flag == False and index != len(lst)-1 and lst[index+1] == 1:
        count+=1
        flag=True
    elif i == 0:
        flag = False


print(count)