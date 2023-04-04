from typing import List


class Solution:
    def getDistinctDifference(self, N : int, A : List[int]) -> List[int]:
        # code here
        left = [ 0 for i in range(N) ]
        right = [0 for i in range(N)]
        val_count = set()
        result = [0 for i in range(N)]
        
        for index,i in enumerate(A):
            left[index] = (len(val_count))
            val_count.add(i)

        val_count = set()
        for index,i in enumerate(A[::-1]):
            right[N-1-index] = (len(val_count))
            val_count.add(i)
        
        for index,(value_x,value_y) in enumerate(zip(left,right)):
            result[index] = (value_x-value_y)

        return result

        



#{ 
 # Driver Code Starts
# class IntArray:

#     def __init__(self) -> None:
#         pass
    
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        N = int(input())
        
        A=[int(i) for i in input().split()]
        
        obj = Solution()
        res = obj.getDistinctDifference(N, A)
        
        print(*res)
        

# } Driver Code Ends