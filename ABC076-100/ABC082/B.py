s = input()
t = input()

list_s = sorted(s)
list_t = sorted(t, reverse=True)

s = ''.join(list_s)
t = ''.join(list_t)

if s < t:
    print("Yes")
else:
    print("No")