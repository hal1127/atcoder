n, m, x, y = map(int, input().split())
l_x = list(map(int, input().split()))
l_y = list(map(int, input().split()))

max_l_x = max(l_x)
min_l_y = min(l_y)

b_x = x if max_l_x < x else max_l_x
b_y = min_l_y if min_l_y < y else y

if b_x < b_y:
    print('No War')
else:
    print('War')