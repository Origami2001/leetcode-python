class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        if n==1:
            return start
        for i in range(start+2,start+2*n,2):
            start=start^i
        return start