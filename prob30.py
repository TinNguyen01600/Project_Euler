import math
import os
import random
import re
import sys
import array as arr

if __name__ == '__main__':
    n = int(input("Enter a number: "))
    sum = 0
    while(n!=0):
        r = int(n%10)
        sum += (r**4)
        n = int(n/10)
    print(sum)