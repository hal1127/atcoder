K = gets.to_i
a = []*1000001
a[1] = 7 % K

for i in 2..K
  a[i] = (a[i-1]*10+7) % K
end

for i in 1..K
  if a[i] == 0
    puts i
    return
  end
end

puts -1