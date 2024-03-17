S = gets.strip

h = Hash.new(0)
S.split('').each {|c| h[c] += 1}

ans = 0
keys = h.keys
for i in 0..keys.size
  for j in (i+1)..keys.size
    ans += h[keys[i]] * h[keys[j]]
  end
end

if h.values.max >= 2
  ans += 1
end

puts ans

