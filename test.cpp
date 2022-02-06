#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int get_num_end(int start, string T)
{
  int i = start;
  while (true) {
    if ('0' <= T.at(i) && T.at(i) <= '9') {
      i++;
    } else {
      break;
    }
  }
  return i;
}

int get_end_bracket_pos(int start, string T)
{
  rep (i, start+1, T.size()) {
    if (T.at(i) == ')') return i;
    if (T.at(i) == '(') i = get_end_bracket_pos(i, T);
  }
  return -1;
}

string tenkai(long long mul, string T)
{
  if (T.size() == 1) {
    string res = to_string(mul) + "(" + T + ")";
    return res;
  }

  string res = "";
  rep (i, 0, T.size()) {
    int num_end = get_num_end(i, T);
    int num = atoll(T.substr(i, num_end-i).c_str());
    int end_brkt_pos = get_end_bracket_pos(num_end, T);

    res += tenkai(mul*num, T.substr(num_end+1, end_brkt_pos-num_end-1));
    i = end_brkt_pos;
  }

  return res;
}

int main()
{
  string S;
  cin >> S;

  string T;
  rep (i, 0, S.size()) {
    if ('a' <= S.at(i) && S.at(i) <= 'z') {
      T += {'1', '(', S.at(i), ')'};
    } else if(S.at(i) == ')') {
      T.push_back(')');
    } else {
      int num_end = get_num_end(i, S);
      T += S.substr(i, num_end-i);
      if (S.at(num_end) != '(') {
        T += {'(', S.at(num_end), ')'};
      } else {
        T.push_back(S.at(num_end));
      }
      i = num_end;
    }
  }

  string U = tenkai(1, T);

  map<char, long long> chr_cnt;
  rep (i, 0, 26) {
    chr_cnt['a'+i] = 0;
  }
  rep (i, 0, U.size()) {
    int num_end = get_num_end(i, U);
    long long num = atoll(U.substr(i, num_end-i).c_str());

    char c = U.at(num_end+1);
    chr_cnt[c] += num;
    i = num_end+2;
  }
  for (auto cc : chr_cnt) {
    printf("%c %lld\n", cc.first, cc.second);
  }
}