#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int me=1;
        int te=n;
        int ar[te];
        for(int j=0;j<n;j++){
            cin>>ar[j];
            if(j>0 && ar[j]!=ar[j-1]){
                me+=1;
            }
        }
        while(me!=0){
             int r=rand()%2;
             switch(r){
                case 0; 
                for(int j=0;j<n;j++){
                    if(j==0 && ar[j]!=ar[j-1]){
                        while(j!=(n-1)){
                            ar[j]=ar[j+1];
                            j++;
                        }
                    }
                }
                te=(te-me);
                for(int j=0;j<n;j++){
                    if(j>0 && ar[j]!=ar[j-1]){
                        me+=1;
                    }
                }

                break;
                case 1:
                for(int j=0;j<n;j++){
                    if(j==0 && ar[j]!=ar[j-1]){
                        te+=1;
                        int temp=ar[j];
                    }
                }


             }

        }
        
        
       
        



    }
}