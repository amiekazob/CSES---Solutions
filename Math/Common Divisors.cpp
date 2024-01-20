#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;
int freq[MAX + 1]; // it will count the frequency of the given numbers
int mul[MAX + 1]; // it will store the count of an index which is a divisible of the number to MAX

int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
 int n; cin >> n;
 int num;
 for (int i = 1; i <= n; i++) {
   cin >> num;
   freq[num]++;
 }
 for (int i = 1; i <= MAX; i++) {
   for (int j = i; j <= MAX; j += i) {
   	 if(freq[j]) { // check if element is present or not in  the array 
   	   mul[i] += freq[j];  // check for the duplicate value occurrence and increament in xth occurrence times
   	 }
   }
 }
 int max_gcd = 1;
 for (int i = 1; i <= MAX; i++) {
 	if (mul[i] > 1) max_gcd = max(max_gcd, i); // store the max index number which played as divisors more than 2 times between the range of 1 to MAX.
 }
 cout << max_gcd << '\n';
 return 0;
}
