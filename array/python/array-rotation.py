
arr = list(map(int,input().split()))
n = int(input("Number of Times Rotation : "))

# Approach 3 O(N) is Log N
elem = len(arr)
val = n*2
while val > elem:
    elem += len(arr)
end = len(arr)-(abs(val-elem)) 
print(end)
print( arr[end:] +arr[:end] )





# Approach 2 O(N) is N
"""
for i in range(n):
    x,y = arr[:2]
    arr = arr[2:] + [x,y]

print(arr)
"""

# Approach 1 Normally used in C++ O(N) is N**2
"""
for i in range(n):
    x,y = arr[:2]
    for j in range(len(arr)):
        if j+2 == len(arr):
            arr[j],arr[j+1] = x,y 
            break
        arr[j] = arr[j+2]

print(arr)
"""