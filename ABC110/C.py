s_s = input()
s_t = input()

#S->Tの変換ができるか確認するディクショナリー
check_ST_dic = {} 
check_TS_dic = {}

for i in range(len(s_s)):
    s = s_s[i]
    t = s_t[i]
    if s not in check_ST_dic:
        check_ST_dic[s] = t
    elif check_ST_dic[s] != t:
        print('No')
        break

    if t not in check_TS_dic:
        check_TS_dic[t] = s
    elif check_TS_dic[t] != s:
        print('No')
        break

else:
    print('Yes') #breakで抜けなかった時のみ実行