

arr = [1,2,3,4,5,7]
def missing_value(arr):
    for index,value in enumerate(arr):
        if(index != value-1):
            return index+1
    return -1


print(missing_value(arr))




