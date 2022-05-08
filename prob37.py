import math
import os
import random
import re
import sys

def prime(n):
  if (n <= 1):
    return 0
  if (n <= 3):
    return 1
  if (n % 2 == 0 or n % 3 == 0):
    return 0
  i = 5;
  while (i * i <= n):
    if(n%i == 0 or n%(i+2)==0):
      return 0
    i = i + 6
  return 1;

if __name__ == '__main__':
  n = int(input("enter number: "))
  print(prime(n))