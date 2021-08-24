a, b = map(str, input().split())
ans = [a*int(b), b*int(a)]
print(min(ans))