class Solution:
    def addDigits(self, num: int) -> int:
        while num>=10:
            result=0
            while num>0:
                pre=num%10
                num=(num-pre)//10
                result=result+pre
            num=result
        return num
