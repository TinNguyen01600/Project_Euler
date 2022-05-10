import math
import os
import random
import re
import sys

def fac(n):
    if(n == 0):
        return 1
    else:
        return (n * fac(n-1))
    
if __name__ == '__main__':
    n = int(input("Enter number: "))
    print(fac(n))