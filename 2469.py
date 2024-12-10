class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        fah=celsius*1.8+32.00
        kel=celsius+273.15
        return [kel,fah]