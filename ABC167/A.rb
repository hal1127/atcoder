S = gets.chomp
T = gets.chomp

("a".."z").to_a.each do |c|
  if T === (S+c)
    puts "Yes"
    return
  end
end

puts "No"