class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        n=len(arr)
        i,j=1,n-2
        ans=0
        while i<=j :
            mid = (i+j)//2
            if(arr[mid]>arr[mid+1]):
                j=mid-1
                ans=mid
            else:
                i=mid+1
        return ans