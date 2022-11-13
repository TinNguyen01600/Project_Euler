import math

#   explaination similar to Leetcode problem 0062

def latticePath(m: int, n: int) -> int:
    k = n - 1
    n = m-1 + n-1
    a = math.factorial(n)
    b = math.factorial(k)
    c = math.factorial(n-k)
    result = a/(b*c)
    return int(result)
    
print(latticePath(21, 21))