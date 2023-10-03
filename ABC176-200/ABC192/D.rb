infl = 9*10**18

X = gets.chomp
M = gets.to_i

def check(n)
  y = []
  m = M
  while (m > 0)
    y.unshift((m % n).to_s)
    m /= n
  end
  y = y.join

  p y

  if X <= y
    return true
  else
    return false
  end
end

if X.size == 1
  puts X <= M ? "1" : "0"
  return
end

max_x = -1
X.split("").each do |c|
  max_x = [max_x, c.to_i].max
end

ok = max_x
ng = infl

while (ok + 1 < ng)
  mid = (ok + ng) / 2
  if check(mid)
    ok = mid
  else
    ng = mid
  end
end

puts ok - max_x