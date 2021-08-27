N, M, X = gets.split.map(&:to_i)
C = []
A = []
N.times do |i|
  input = gets.split.map(&:to_i)
  C.push(input[0])
  A.push(input[1..M])
end


ach = []
cost = [0] * 2**N
(2**N).times do |b|
  ach.push([0] * M)

  N.times do |d|
    if b[d] === 1
      A[d].each_with_index do |a, i|
        ach[b][i] += a
      end
      cost[b] += C[d]
    end
  end
end

ans = []
(2**N).times do |i|
  if ach[i].min >= X
    ans.push(cost[i])
  end
end

puts ans.min || -1
