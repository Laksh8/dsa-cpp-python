arr = [1,2,3,4,5,6,7,8,9,10]
n = 10
s = 15

def subArray(arr,n,s):
    for i in range(n):
        for j in range(n-1,i,-1):
            if s == sum(arr[i:j+1]):
                print(arr[i:j+1])
                return i+1,j+1
    return -1

print(subArray(arr,n,s))