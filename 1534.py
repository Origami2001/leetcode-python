class Solution:
    def countGoodTriplets(self, arr: List[int], a: int, b: int, c: int) -> int:
        n=len(arr)
        count=0
        for i in range (0,n-2):
            for j in range (i+1,n-1):
                if(abs(arr[i]-arr[j])<=a):
                    for k in range (j+1,n):
                        if((abs(arr[j]-arr[k])<=b) and (abs(arr[i]-arr[k])<=c)):
                            count=count+1
        return count