# import numpy as np
import math
from functools import reduce
N = int(input())
a = list(map(int, input().split()))

# m = np.lcm.reduce(a)
m = reduce(lambda x, y: x * y // math.gcd(x, y), a)

b = list(map(lambda x: (m - 1) % x, a))
m_sum = sum(b)

print(m_sum)
