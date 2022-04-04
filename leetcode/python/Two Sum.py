class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        count = len(nums)
        for i in range(count-1):
            for j in range(i+1,count):
                if nums[i] + nums[j] == target:
                    return [i,j]
                    