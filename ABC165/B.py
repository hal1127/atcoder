X = int(input())
m = 100

cnt = 0
while True:
    cnt += 1
    m += m // 100
    if m >= X:
        print(cnt)
        break