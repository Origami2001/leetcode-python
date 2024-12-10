class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        mul=1
        minus=0
        while n>0:
            pre=n%10
            n=(n-pre)//10
            mul=mul*pre
            minus=minus+pre
        return mul-minus