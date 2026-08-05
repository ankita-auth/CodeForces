#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);    
    cin.tie(nullptr);
    int t;
    cin>>t;
    bool b=false;
    while(t--){
        int n;
        cin>>n;
        string n1,n2;
        cin>>n1>>n2;
        if(n1==n2){
            b=true;
        }
        for(int i=1;i<=n-2;i++){
            if(n1[i-1]!=n1[i+1]){
                char a=n1[i-1];
                n1[i-1]=n1[i+1];
                n1[i+1]=a;
                if(n1==n2){
                    b=true;
                    break;
                }
                
            }
        }
        
    }
         
    
    return 0;
}