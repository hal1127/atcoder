N = int(input())
a = [int(i) for i in input().split()]
ap = [i + 1 for i in a]
am = [i - 1 for i in a]

a3 = []
a3.extend(a)
a3.extend(ap)
a3.extend(am)
a3 = [str(i) for i in a3]

from collections import Counter
c = Counter(a3)
c = dict(c)

print(max(c.values()))