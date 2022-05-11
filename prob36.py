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

if __name__ == '__main__':
  n = int(input("Enter a number: "))
  print(base_10_to_2(n))