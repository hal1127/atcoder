n = int(input())
x = list(map(int, input().split()))

y = sorted(x)
l = y[n//2 - 1]
r = y[n//2]

for i in x:
    if i < r:
        print(r)
    else:
        print(l)