N = gets.to_i
MOD = (10**9) + 7
ans = 1

set_A = 1
N.times do
  set_A *= 10
  set_A %= MOD
end

not_inc_0 = 1
N.times do
  not_inc_0 *= 9
  not_inc_0 %= MOD
end

not_inc_9 = 1
N.times do
  not_inc_9 *= 9
  not_inc_9 %= MOD
end

not_inc_0_and_9 = 1
N.times do
  not_inc_0_and_9 *= 8
  not_inc_0_and_9 %= MOD
end

ans = set_A - not_inc_0 - not_inc_9 + not_inc_0_and_9

puts ans % MOD