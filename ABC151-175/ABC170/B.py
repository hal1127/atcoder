X, Y = list(map(lambda x: int(x), input().split()))

for i in range(X+1):
  t = i
  k = X - i
  sum = t * 2 + k * 4
  if sum == Y:
    print('Yes')
    break
else:
  print('No')