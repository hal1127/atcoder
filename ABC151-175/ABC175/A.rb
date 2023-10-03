S = gets.chomp

cnt = 0
3.times do |i|
  if (S.include?("R"*(i+1)))
    cnt = i+1
  else
    break
  end
end

puts cnt