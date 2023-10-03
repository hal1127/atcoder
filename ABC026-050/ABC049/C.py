s = input()
l = len(s)

while s:
    if s.rfind('dream') == l-len('dream'): #文字列の背後から'dream'をさがす
        s = s[:l-len('dream')] #末尾の'dream'を削除する（スライス）
    
    elif s.rfind('dreamer') == l-len('dreamer'):
        s = s[:l-len('dreamer')]

    elif s.rfind('erase') == l-len('erase'):
        s = s[:l-len('erase')]
    
    elif s.rfind('eraser') == l-len('eraser'):
        s = s[:l-len('eraser')]

    else:
        break #文字列がなくなるか、指定の文字が探せなくなったらbreak

    l = len(s)

if s:
    print('NO')
else:
    print('YES')