#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  ll n ; cin >> n;
  int arr[n-1]; ll sum = 0;
  for (int i = 0 ; i < n - 1; i++) {
    cin >> arr[i];
    sum += arr[i];
  }
  ll res = ((n*n) + n)/2;
  cout << res - sum << "\n";
  return 0;
}
//https://cses.fi/problemset/task/1083
