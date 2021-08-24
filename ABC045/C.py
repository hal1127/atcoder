s = input()
l = len(s)
cases = 2 ** (l - 1)
ans = 0

for i in range(cases):
    tmp = int(s)
    adjust = str(format(i, 'b').zfill(l-1))
    k = 0
    for j in range(l-1):
        if adjust[j] == '1':
            ans += tmp % (10 ** (k+1))
            tmp //= 10 ** (k+1)
            k = 0
        else:
            k += 1
    ans += tmp

print(ans)