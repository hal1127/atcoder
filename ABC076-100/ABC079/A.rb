N = gets.chomp

10.times do |i|
  if N.include?(i.to_s*3)
    puts "Yes"
    return
  end
end

puts "No"