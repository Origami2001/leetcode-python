class Solution:
    def maxScore(self, s: str) -> int:
        m=0
        for i in range(1,len(s)):
            sum=0
            for j in range(0,i):
                if s[j]=='0':
                    sum=sum+1
            for k in range(i,len(s)):
                if s[k]=='1':
                    sum=sum+1
            if sum>m:
                m=sum
        return m