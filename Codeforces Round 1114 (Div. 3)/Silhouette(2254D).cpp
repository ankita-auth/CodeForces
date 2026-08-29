#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> b(n);
        map<ll,ll> freq;

        for(int i=0;i<n;i++){
            cin>>b[i];
            freq[b[i]]++;

        }
        if(!freq.count(0)){
            cout<<-1<<endl;
            continue;
        }

        map<ll, ll> ans;
        ll prv_shadow=0,prv_cnt=0,lst=0;
        bool ok=true;

        for(auto[cur_shadow,cur_cnt]:freq){
            if(cur_shadow!=0){
                ll diff=cur_shadow-prv_shadow;

                if(diff%prv_cnt!=0){
                    ok=false;
                    break;
                }

                ll u=diff/prv_cnt;
                if(u<=lst){
                    ok=false;
                    break;
                }

                ans[prv_shadow]=u;
                lst=u;
            }

            prv_shadow=cur_shadow;
            prv_cnt=cur_cnt;
        }

        if(!ok){
            cout<<-1<<endl;
            continue;
        }

        ans[prv_shadow]=lst+1;
        for(int i=0;i<n;++i){
            cout<<ans[b[i]]<<" \n"[i==n-1];
        }
    }
}