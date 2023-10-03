X, N = list(map(lambda x: int(x), input().split()))
p = list(map(lambda x: int(x), input().split()))

l = [i for i in range(101) if i not in p]

ng = -1
ok = 100
while ng + 1 < ok:
  mid = (ok + ng) // 2
  if X > l[mid]:
    ng = mid
  else:
    ok = mid
else:
  print(l[mid])
