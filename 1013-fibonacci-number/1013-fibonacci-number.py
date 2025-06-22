class Solution:
    def __init__(self):
        self.global_dict = {}
    def fib(self, n: int) -> int:
        # This is just naive method 
        # Looking at the base cases without memoization
        
        #base case

        if(n == 0):
            self.global_dict.update({n: 0})
            return 0
        
        if(n == 1):
            self.global_dict.update({n:1})
            return 1

        if(n in self.global_dict):
            return self.global_dict[n]
        else:
            self.global_dict.update({n: self.fib(n - 1) + self.fib(n - 2)})
        
        return self.global_dict[n]