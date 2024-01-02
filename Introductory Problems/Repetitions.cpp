
#include<bits/stdc++.h>
using namespace std;

typedef long  long ll;
int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
  string s; cin >> s;
  int cnt = 1, res = 1;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == s[i+1]) {
       cnt++;
    }else {
       res = max (cnt, res);
       cnt = 1;
    }
  }
  cout << max (cnt, res) << "\n";       
  return 0;    
}
//https://cses.fi/problemset/task/1069
