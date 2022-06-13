import math
import os
import random
import re
import sys
import array as arr

def letter_count(n):
  three = arr.array('i', [1, 2, 6, 10])
  four = arr.array('i', [4, 5, 9])
  five = arr.array('i', [3, 7, 8, 40, 50, 60])
  six = arr.array('i', [11, 12, 20, 30, 80, 90])
  seven = arr.array('i', [15, 16, 70])
  eight = arr.array('i', [13, 14, 18, 19])
  nine = arr.array('i', [17])
  if n == 0:
    return 0
  if n in (three):
    return 3
  if n in (four):
    return 4
  if n in (five):
    return 5
  if n in (six):
    return 6
  if n in (seven):
    return 7
  if n in (eight):
    return 8
  if n in (nine):
    return 9
  
#print(letter_count(16))
sum = 0
for i in range(20):  #0 to 19
  sum += int(letter_count(i+1))  #1 to 20
for i in range(21,100):  #21 to 99
  x = i % 10
  y = i - x
  sum += int((letter_count(x) + letter_count(y)))
hundred_and = 10
hundred = 7
for i in range(100, 1000):  #100 to 999
  k = i % 100
  if(k == 0):
    y = i // 100
    sum += int(letter_count(y) + hundred)
  elif(k <= 20):
    y = i // 100
    sum += int(letter_count(y) + hundred_and + letter_count(k))
  else:
    x = i % 10
    y = i % 100 - x
    z = i // 100
    sum += int(letter_count(z) + hundred_and + letter_count(y) + letter_count(x))
print(sum)