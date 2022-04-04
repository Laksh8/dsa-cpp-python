# First Solution 
s = list(map(int,input().split()))
n = len(s)
# lst = []
# for i in range(n):
#     if i %2 ==1:
#         val = max(s)
#         lst.append(val)
#     else:
#         val = min(s)
#         lst.append(val)
#     s.remove(val)
# print(lst)

# Second Solution 
s.sort()
first = s[:n//2]
last = s[n//2:]
print(first)
print(last)
print(n//2)
for i in range(n//2):
    last.insert(i+i,first[(n//2)-i-1])
print(last)
