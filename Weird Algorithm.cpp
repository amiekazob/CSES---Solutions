#include<bits/stdc++.h>
using namespace std;

typedef long  long ll;
int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
  ll n; cin >> n;   
  cout << n << " ";    
  while (n != 1) {      
    if (n %2 == 0) n /= 2;
    else n = (n * 3)  + 1;    
    cout << n << " ";           
  }     
  return 0;    
}
https://cses.fi/problemset/task/1068/
