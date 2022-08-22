#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int K;
    cin>>K;
    while(K--){
        int n,x,m;
        cin>>n;
        map<int,int> t;
        m=0;
        for(int i=1;i<=n;i++){
            cin>>x;
            t[x]++;
        }
        for(auto i:t)
        m=max(m,i.second);
        if(m>(n+1)/2)
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
    }
	// your code goes here
	return 0;
}
