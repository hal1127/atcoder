A, B, X = map(int, input().split())

#############
#  二分探査  #
#############
#買うことのできる数の上限
_max = min(10**9, X)
#lowは範囲内
low = 0
#highは範囲外
high = _max + 1
while high - low > 1 :
    mid = (high + low) // 2

    N = mid * A + len(str(mid)) * B
    #XはNより小さい範囲か？
    if X < N:
        #下半分の範囲にする
        #highは常に範囲外
        high = mid
    else:
        #上半分の範囲にする
        #lowは常に範囲内
        low = mid
print(low)