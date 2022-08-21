nums = [5,4,-1,7,8]

su = nums[0]

max_su = su

for i in nums[1:]:
    su = max(su+i,i)
    max_su = max(max_su,su)

print(max_su)






