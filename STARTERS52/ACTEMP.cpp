#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
  int a,b,c;
  cin >> a >> b >> c;
  if(max(a,c)<=b) puts("Yes");
  else puts("No");
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}
