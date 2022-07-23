from itertools import permutations 
perm = permutations([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])

i = 0
for val in perm:
    i+=1
    if i == 1000000:
        print(*val)