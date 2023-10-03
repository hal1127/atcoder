n, m, x = map(int, input().split())
low = 0
high  = 0

for i in input().split():
    if int(i) < x:
        low += 1
    else:
        high += 1

print(min(low, high))