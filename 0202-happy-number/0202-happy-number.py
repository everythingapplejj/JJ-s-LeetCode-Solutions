class Solution:
    def process(self, n):
        accumulate = 0
        while(n != 0):
            accumulate += pow(n % 10, 2)
            n = int(n / 10)
        
        return accumulate
    def isHappy(self, n: int) -> bool:
        dp = []
        while(True):
            if(n in dp):
                return False
            dp.append(n)
            n = self.process(n)
            if(n == 1):
                break

        return True
            