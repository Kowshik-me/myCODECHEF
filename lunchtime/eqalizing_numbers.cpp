#include <iostream>
#include <bits/stdc++.h>
#define LOVE return 0
using namespace std;

int main() {
    long long int K;
    cin>>K;
    //............................
    while(K--){
       long long  int you,me;
        cin>>you>>me;
        //.........................
        if(you==me)
        cout<<"YES"<<'\n';
        //........................
        else if(abs(you-me)%2==0)
        cout<<"YES"<<'\n';
        //........................
        else
        cout<<"NO"<<'\n';
    }
	// your code goes here
	LOVE;
}
