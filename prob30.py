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
        sum += (r**5)
        n = int(n/10)
    if sum == temp:
        return 1
    else:
        return 0

if __name__ == '__main__':
    #n = int(input("Enter a number: "))
    n = 10  # all 0<n<10 are not counted because they dont include sums
    sum = 0
    while(n<1000000):
        if(check(n)):
            print(n)
            sum+=n
        n+=1
    print(sum)