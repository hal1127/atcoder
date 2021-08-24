N = gets.to_i
memo = []
N.times do
  a = gets.to_i
  if pos = bsearch{|x| x >= a}
    memo.delete_at(pos)
  else
    memo.push(a)
  end
end

puts memo.count