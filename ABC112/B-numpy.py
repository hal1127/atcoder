import numpy as np

N, T = map(int, input().split())
c , t = np.array([list(map(int, input().split())) for _ in range(N)]).T

filtered_c = c[t <= T]

ans = 'TLE' if len(filtered_c) == 0 else filtered_c.min()

print(ans)
