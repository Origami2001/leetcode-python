class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        reshuffle=[]
        nums1=[]
        nums2=[]
        for i in range(0,n):
            nums1.append(nums[i])
        for j in range(n,2*n):
            nums2.append(nums[j])
        for k in range(0,n):
            reshuffle.append(nums1[k])
            reshuffle.append(nums2[k])
        return reshuffle