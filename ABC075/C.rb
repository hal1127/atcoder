A = gets.split.map(&:to_i)

A.each do |i|
  if A.count(i) == 1
    puts i
    return
  end
end