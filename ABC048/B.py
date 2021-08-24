a, b, x = map(int, input().split(' '))

if a % x == 0: #aより大きい最初のxの倍数を作る
    y1 = a
elif a < x:
    y1 = x
else:
    y1 = a + (x - a % x)

y2 = b - b % x

n = (y2 - y1) // x + 1
print(y1)