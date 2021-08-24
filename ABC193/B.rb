INF = 2*10**9
INFL = 9*10**8
MOD = 10**9+7

N = gets.to_i
inputs = []
N.times do
  input = gets.split.map(&:to_i)
  inputs.push(input)
end

X = []
P = []
inputs.each do |i|
  X.push(i[2] - i[0])
  P.push(i[1])
end

ans = []
N.times do |i|
  if X[i] > 0
    ans.push(P[i])
  end
end

puts ans.empty? ? -1 : ans.min