INF = 2*10**9
INFL = 9*10**8
MOD = 10**9+7

N, A, B = gets.split.map(&:to_i)

ans = N / (A + B) * A
rem = N % (A + B)
ans += [rem, A].min

puts ans