//Ticket fine
#include <iostream>
using namespace std;

int main() {
    int K;
    cin>>K;
    while(K--){
        int a,b,c;
        cin>>a>>b>>c;
        int A=b-c;
        cout<<A*a<<endl;
    }
	// your code goes here
	return 0;
}
//TEAM OF TWO
#include <iostream>
#include<bits/stdc++.h>
#define SIMP return 0;
#define KOWSHIK vector<vector<int>> v;
#define OUTPUT cout<<(you?"YES":"NO")<<'\n';
#define MEET vector<int> u;
#define FALSE bool you=false;
#define TRUE bool me=true;
using namespace std;

//................................................................

void LOVE(){
    int nUM;
    cin>>nUM;
    //............................
    KOWSHIK
    //.............................
    for(int i=0;i<nUM;i++){
        int k;
        cin>>k;
        //.....................
        MEET
        for(int j=0;j<k;j++){
            int x;
            cin>>x;
            //....................
            u.push_back(x);
        }
        v.push_back(u);
        u.clear();
    }
    //........................................
    FALSE
    //........................................
        for(int i=0;i<nUM;i++){
            
            for(int j=i; j<nUM;j++){
                
                TRUE
                vector<int> vis(6,0);
                
                for(int k=0;k<v[i].size(); k++){
                    vis[v[i][k]]=1;
                }
                
                for(int k=0;k<v[j].size();k++){
                    vis[v[j][k]]=1;
                }
                
                for(int k=1;k<=5;k++){
                    if(vis[k]==0) me=false;
                    
                }
                if(me){
                    
                    you=true;
                    break;
                }
            }
            
            if(you) break;
        }
        
        OUTPUT
    }
//................................................................

int main() {
    int K;
    cin>>K;
    while(K--){
        LOVE();
    }
	// your code goes here
	SIMP
}

//EQAL DISTNICT
#include<bits/stdc++.h>
#include <iostream>
#define EQDIS return 0;
#define SIMP cout<<(ok?"YES":"NO")<<'\n';
#define SET set<int> Tst;
#define DANK if(!(nUM-Tst.size())) ok=false;
using namespace std;

void LOVE(){
    long long int nUM;
    cin>>nUM;
    //.........................
    SET
    bool ok=true;
    //..........................
    for(int i=0;i<nUM;i++){
        int x;
        cin>>x;
        
        Tst.insert(x);
        
    }
    //...........................
    if(Tst.size()&1){
        DANK
    }
    SIMP
}

//...................................................................

int main() {
    int K;
    cin>>K;
    while(K--){
        LOVE();
    }
	// your code goes here
	EQDIS
}


//NUMBER OF CREDITS
#include <iostream>
using namespace std;

int main() {
    int K;
    cin>>K;
    while(K--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans=(4*a)+(2*b);
        cout<<ans<<'\n';
    }
	// your code goes here
	return 0;
}
