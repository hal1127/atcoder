A, B = map(str, input().split())
operator = ["+", "-", "*"]
ans = []

for i in operator:
    ans.append(eval(A+i+B))

print(max(ans))