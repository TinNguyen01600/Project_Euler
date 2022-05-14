import math
import os
import random
import re
import sys
import array as arr

def check(n):
    temp = n
    sum = 0
    while(n!=0):
        r = int(n%10)
        sum += (r**4)
        n = int(n/10)
    if sum == temp:
        return 1
    else:
        return 0

if __name__ == '__main__':
    n = int(input("Enter a number: "))
    
    print(check(n))