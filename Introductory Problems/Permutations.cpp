#include<bits/stdc++.h>
using namespace std;

typedef long  long ll;
int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
  int n; cin >> n;
  if (n == 2 || n == 3){
    cout << "NO SOLUTION" << "\n";
    return 0;
  }
  if (n == 4) {
    cout << 2 << " " << 4 << " " << 1 << " " << 3 << "\n";
    return 0;
  }
  for (int i = 1; i <= n; i += 2) cout << i << " ";
  for (int i = 2; i <= n; i += 2) cout << i << " ";
  cout << "\n";    
  return 0;    
}
//https://cses.fi/problemset/task/1070
