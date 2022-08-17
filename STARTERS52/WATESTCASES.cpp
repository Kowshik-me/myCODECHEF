#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[101],n,t;
string s;
void solve() {
  cin >> n;
  for(int i=0;i<n;++i)
    cin >> a[i];
  cin >> s;
  t=101;
  for(int i=0;i<n;++i)
    if(s[i]=='0')
      t=min(t,a[i]);
  cout << t << endl;
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}
