INF = 2*10**9
INFL = 9*10**8
MOD = 10**9+7
require 'set'

N = gets.to_i

s = Set[]

(2..(Math.sqrt(N))).each do |i|
  x = i * i
  while (x <= N)
    s.add(x)
    x *= i
  end
end

# puts s
puts N - s.size