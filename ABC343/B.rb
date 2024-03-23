N = gets.to_i
A = Array.new
N.times do
  A.push gets.split(' ').map(&:to_i)
end

ans = Array.new
for a in A
  e = Array.new
  a.each_with_index do |v, i|
    if v == 1
      e.push(i+1)
    end
  end
  ans.push(e)
end

for e in ans
  e.each_with_index do |v, i|
    if i != 0
      print ' '
    end
    print v
  end
  puts ''
end

