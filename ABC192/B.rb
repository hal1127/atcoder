S = gets.chomp

s = S.split("")

s.each_with_index do |c, i|
  if (i + 1) % 2 === 1 && !("a".."z").to_a.member?(c)
    puts "No"
    return
  elsif (i + 1) % 2 === 0 && !("A".."Z").to_a.member?(c)
    puts "No"
    return
  end
end

puts "Yes"