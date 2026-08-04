#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);     
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
       
        cin>>s;
        char ch;
       
      
             int m=0;
            
            ch=s[0];
            m=1;
            for(int j=1;j<n-1;j++){
                if(s[j-1]==s[j+1]){
                    
                    continue;
                    

                }
                if(ch!=s[j]){
                       m+=1;
                       ch=s[j];
                      
                }
                

                
                
            }
          
            
            
            




  
        cout<<m<<endl;


    }


    return 0;
}