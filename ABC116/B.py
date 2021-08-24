s = int(input())
i = 1

if s == 4:
    ans = 4
elif s == 2:
    ans = 4
elif s == 1:
    ans = 4
else:
    while s != 4:
        if s % 2 == 0:
            s = s // 2
        else:
            s = 3 * s + 1
        i += 1
    ans = i + 3

print(ans)