class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        i = int(math.sqrt(c))
        j = 0
        while j <= i:
            if j*j + i*i == c:
                return True
            
            elif j*j + i*i < c:
                j+=1
            
            else:
                i -= 1
                
        return False