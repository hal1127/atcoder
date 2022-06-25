N, T = map(int, input().split())
ct = [list(map(int, input().split())) for _ in range(N)]

min_c = 2e6
for e in ct:
  if e[1] <= T:
    min_c = min(min_c, e[0])

print('TLE' if min_c == 2e6 else min_c)