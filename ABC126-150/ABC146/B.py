N = int(input())
S = list(input())
list_ans = []

for i in S:
    tmp = ord(i)
    tmp += N
    if tmp > ord("Z"):
        tmp -= (ord("Z") - ord("A")) + 1
    list_ans.append(chr(tmp))

ans = "".join(list_ans)
print(ans)