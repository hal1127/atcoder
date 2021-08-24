Sp = input()
T = input()
len_Sp = len(Sp)
len_T = len(T)
ans = 'UNRESTORABLE'

i = len_Sp - len_T
while(i >= 0):
    isAns = True
    for j in range(len_T):
        if Sp[i + j] != T[j] and Sp[i + j] != '?':
            isAns = False
            break
    if isAns:
        ans = Sp[:i] + T + Sp[i + len_T:]
        ans = ans.replace('?', 'a')
        break
    i -= 1
print(ans)