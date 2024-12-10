class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        k=0
        for i in range(0,len(nums)):
            for j in range(i,len(nums)):
                if(i!=j):
                    if(nums[i]==nums[j]):
                        k=k+1
        return k
        