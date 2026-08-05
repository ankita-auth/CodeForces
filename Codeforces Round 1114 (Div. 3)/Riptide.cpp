#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);    
    cin.tie(nullptr);
    int a,b,c;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int t=a+b+c;
        int r=0;
        int ma,mi;
        while(true){
            if(a!=b && b!=c && c!=a){
                if(a>b && a>c){
                    a--;
                    if(b>c){
                        c++;
                    }else{
                        b++;
                    }
                }else if(b>c && b>a){
                    b--;
                    if(a>c){
                        c++;
                    }else{
                        a++;
                    }
                }else if(c>b && c>a){
                    c--;
                    if(b>a){
                        a++;
                    }else{
                        b++;
                    }
                }
                r+=1;
            }
            else{
                cout<<r<<endl;
                break;
            }
        }
    }
    return 0;
}