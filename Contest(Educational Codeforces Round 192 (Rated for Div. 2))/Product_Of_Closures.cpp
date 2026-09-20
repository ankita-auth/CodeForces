//*https://codeforces.com/contest/2242/problem/E

#include<bits/stdc++.h>
using namespace std;

#define fore(i,l,r) for(int i=int(l);i<int(r);i++)
#define sz(a) int(a.size())

int l,r,n;
void solve(){
    cin>>l>>r>>n;

    int k=63-__builtin_clzll(r);
    int x=-1,y=-1;
    if(l>=(1ll<<k)){
        int p=30;
        while(((l>>p)&1)==((r>>p &1 ))){
            p--;
        }
        assert(p>=0);
        x=l;
        y=l-(l&((1<<p)-1))+(1<<p);
    }
    else{
        x=max(l,(1<<(k-1)));
        y=1ll<<k;
    }
    assert(l<=x&&x<y&&y<=r);

    auto getBinary=[](int v){
        vector<int> rep;
        while(v>0){
            rep.push_back(v&1);
            v>>=1;
        }
        reverse(rep.begin(),rep.end());
        return rep;
    };

    auto x_bits=getBinary(x);
    auto y_bits=getBinary(y);

    string ans(n,'0');
    fore(i,0,n)
        ans[i]='0'+(x_bits[i%x_bits.size()] & y_bits[i%y_bits.size()]);
        cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}



//*T.C:O(n)
//*S.C:O(n)

//*LOGIC
/*
Our question is asking us to find 2 numbers btw the range of l & r and then take its binary & and print it[Condition is that whatever 2 no we choose it should be lexicographically smallest then the other pair binary &]
 
Here we will use the base as k = log2 (r), 2^k = r[2^k cannot exceed r]
 
We will take 3 cases to do this:-
 
//*CASE 1:-
l >= 2^k -----------> x = l, y = l - (l mod 2^d) + 2^d
 
Example: suppose l = 10 & r = 13 so k = 3 so 2^k = 8
so l >= 8 so x = l and for y :-
 
10: 1010
13: 1101    
So MSB is in 2nd index so till that in 13 we will keep same and rest 0 to make the smallest binary & answer
To do that using l we first subtract l mode 2^d to remove all 1 and make zero then add 2^d to make that index '1' to match r
 
//*CASE 2:-
2^(k-1) < l < 2^k  ---------> x = l, y = 2^k
 
Derivation:-
There are 2 values existing that is k & k+1.
If we take l = 10 & r = 20 then in btw them from 10 to 15 no of bits: 4 and 16 to 20 : 5 bits so k & k+1
 
so k mean there will be 1 in every k index , k+1 means there will be 1 in every k+1 index[closure]
(1(0)^k)*
 
but we cant solely take k or k+1 to build x and y because if we do that then both x and y have 1 then & will also have 1 so we can't get smallest value
 
For that we will take k+1 as y and k as l(k+1 means 2^k because 16 has 10000) so x = l & y = 2^k
 
//*CASE 3:
l <= 2^(k-1) ----------> x = 2^(k-1), y= 2^k
 
Derivaton:-
Here also same thing k & k+1 but we will take LCM so k*(k+1)
so we will take x from k and y from k+1 and because here l comes under 2^(k-1) so x = 2^(k-1) & y = 2^k
 
*/
 