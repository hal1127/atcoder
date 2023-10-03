INF = 2*10**9
INFL = 9*10**8
MOD = 10**9+7

N = gets.to_i
S = gets.strip

(N-2).times do |i|
    if S[i, 3] == "ABC"
        puts i+1
        exit
    end
end

puts -1