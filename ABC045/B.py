A_ary, B_ary, C_ary = [str(input()) for _ in range(3)]

tmp = A_ary[0]
A_ary = A_ary[1:]
while True:
    if tmp == 'a':
        if A_ary:
            tmp = A_ary[0]
            A_ary = A_ary[1:]
        else:
            print('A')
            break
    elif tmp == 'b':
        if B_ary:
            tmp = B_ary[0]
            B_ary = B_ary[1:]
        else:
            print('B')
            break
    else:
        if C_ary:
            tmp = C_ary[0]
            C_ary = C_ary[1:]
        else:
            print('C')
            break