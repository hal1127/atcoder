N = int(input())
m = 0; a = 0; r = 0; c = 0; h = 0
for i in range(N):
  name = input()
  if name[0] == 'M':
    m += 1
  elif name[0] == 'A':
    a += 1
  elif name[0] == 'R':
    r += 1
  elif name[0] == 'C':
    c += 1
  elif name[0] == 'H':
    h += 1
# print(m, a, r, c, h)

import itertools
combinations = itertools.combinations(['M', 'A', 'R', 'C', 'H'], 3)

ans = 0
for comb in combinations:
  tmp = 1
  for elm in comb:
    if elm == 'M':
      tmp *= m
    elif elm == 'A':
      tmp *= a
    elif elm == 'R':
      tmp *= r
    elif elm == 'C':
      tmp *= c
    elif elm == 'H':
      tmp *= h
  ans += tmp
  # print(comb, tmp)

print(ans)