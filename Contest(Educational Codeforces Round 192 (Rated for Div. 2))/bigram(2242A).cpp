//*https://codeforces.com/contest/2242/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        bool ok=false;
        int twice=0;
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            if(x>=3){
                ok=true;
            }
            if(x==2){
                twice++;
            }
        }
        if(ok || twice>=2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
//----------------X---------------
//*T.C:O(t*k)
//*S.C:O(1)
//----------------X---------------
//*Logic->
/*
Suppose we are having 1 2 3 which means a bb ccc
To check for a bigram we need 2 conditions:-
1. one of the no. must be >2 [e.g: 1 2 3 so ccc we can make cc cc[Bigram] ]
2. Atleast 2 of the no should be == 2[e.g: 1 2 2, so here bb cc so we can make bcbc: Bigram]
*/