class Solution:
    def findMin(self, nums: List[int]) -> int:
        
        n = len(nums)
        if n==1:
            return nums[0]
        i = 0
        j = n-1
        p = nums[-1]
        ans = p
        while i<=j:
            mid = (i+j)//2
            if nums[mid]<p:
                ans = nums[mid]
                p = ans
                j = mid-1
            else :
                #p = nums[mid]
                i = mid+1
        return ans
