import math
import os
import random
import re
import sys

# This problem has long execution time
# Recommended run on Repl.it

def fac(n):
    if(n == 0):
        return 1
    else:
        return (n * fac(n-1))
    
def check(n):
    temp = n
    sum = 0
    while(n != 0):
        r = n%10
        print(fac(r))
        sum += fac(r)
        n = int(n/10)
    if(sum == temp):
        return 1
    else:
        return 0
    
if __name__ == '__main__':
    # n = int(input("Enter number: "))
    # #print(fac(n))
    # print(check(n))
    
    # since all 0 < n < 10 is not included 
    # (because 1!, 2!, 3!, .. are not sums.), we start from n=10
    n = 10
    while(n<1000000):   #I think 1000000 is big enough :))
        if(check(n)):
            print(n)
        n+=1