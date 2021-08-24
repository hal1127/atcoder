n,a,b = map(int, input().split())
ans = 0

for i in range(1, n+1):
    tmp_num = i
    tmp_sum = 0
    
    while tmp_num > 0:
        tmp_sum += tmp_num % 10
        tmp_num //= 10
    
    if a <= tmp_sum <= b:
        ans += i
    
print(ans)