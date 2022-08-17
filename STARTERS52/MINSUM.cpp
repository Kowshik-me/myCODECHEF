#include<bits/stdc++.h>
#define int long long
using namespace std;
int gcd(int a,int b) {
  if(b==0) return a;
  return gcd(b,a%b);
}
int n,x,t;
void solve() {
  cin >> n >> x;
  for(int i=1;i<n;++i) {
    cin >> t;
    x=gcd(x,t);
  }
  cout << x*n << endl;
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}
