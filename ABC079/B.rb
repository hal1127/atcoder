N = gets.to_i

L = [2, 1]

(2..N).each do |i|
  L[i] = L[i-1] + L[i-2]
end

puts L[N]