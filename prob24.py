from itertools import permutations 
perm = permutations([0, 1, 2])

for val in perm:
    print(*val)