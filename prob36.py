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
    
def check_2(n):     #check if n is palindrome in 2-base
    bin = base_10_to_2(n)
    temp = n
    i = 0
    count = 0
    while(temp != 0):
        r = temp%2
        if(r == int(bin[i])):
            count += 1
        temp = int(temp/2)
        i+=1
    if count == len(bin):
        return 1
    else:
        return 0

if __name__ == '__main__':
    #   n = int(input("Enter a number: "))
    #   print(base_10_to_2(n))
    #   print(check_10(n))
    #   print(check_2(n))
    n = 2
    sum = 1
    while(n<1000000):
        if(check_10(n) and check_2(n)):
            print(n)
            sum += n
        n+=1
    print(sum)