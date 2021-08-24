N, K = gets.chomp.split

a = [""]*(K.to_i+1)
a[0] = N

def g2(x)
  return x.split("").sort.join
end

def g1(x)
  return x.split("").sort.reverse.join
end

(1..K.to_i).each do |i|
  a[i] = (g1(a[i-1]).to_i - g2(a[i-1]).to_i).to_s
end

puts a[K.to_i]