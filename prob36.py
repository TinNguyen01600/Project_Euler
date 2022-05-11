import math
import os
import random
import re
import sys
import array as arr

def base_10_to_2(num):
    if(int(num) <= 1):
        return num
    binaryValue = ''
    decimalRemainder = int(num)
    while decimalRemainder > 0:
      binaryValue = str(decimalRemainder % 2) + binaryValue
      decimalRemainder = math.floor(decimalRemainder / 2) 
    return binaryValue

def check_10(n):    #check if n is palindrome in 10-base
    temp = n
    x = 0
    while(temp != 0):
        r = temp%10
        x = x*10 + r
        temp = int(temp/10)
    if(x == n):
        return 1
    else:
        return 0

if __name__ == '__main__':
  n = int(input("Enter a number: "))
  print(base_10_to_2(n))
  print(check_10(n))