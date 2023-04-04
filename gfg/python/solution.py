lst = [1,2,3,4,5,6,7,8,9,10]
gap = 2
dct = { value:False for index,value in enumerate(lst)}
total_arr = []
new_arr = []
def fun(lst,gap,i):
    if(dct.get(i) != None and dct[i] != True):
        new_arr.append(i)
        dct[i] = True
        fun(lst,gap,i+gap)
    else:
        if len(new_arr) >1 :
            total_arr.append(new_arr.copy())
        new_arr.clear()

for i in lst:
    if not dct[i]:
        fun(lst,gap,i)

print(total_arr)
    








    




# lst = [112, 320, 230, 431, 233, 231,432,232, 412, 598]

# lst = [1,3,2,4,5,9,8,7,6]

# lst.sort()

# flag = False
# i = 0

# print(lst)

# new_arr = []
# total_arr = []
# for i in range(1,len(lst)+1):
#     if i == len(lst) and  new_arr:
#         new_arr.append(lst[i-1])
#         total_arr.append(new_arr)

    
#     if i == len(lst) :
#         break


#     if lst[i] == lst[i-1]+1:
#         new_arr.append(lst[i-1])
#         flag = True
#     elif flag:
#         new_arr.append(lst[i-1])
#         total_arr.append(new_arr)
#         new_arr = []
#         flag=False
    
        

print(total_arr)













