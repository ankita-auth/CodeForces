// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     unsigned int t;
//     cin>>t;
//     int arr[t];
//     int z=0;
//     while(t--){
//         z++;
//         unsigned int n;
//         cin>>n;
//         if(n<3){
//             cout<<"Wrong Input";
//             break;
//         }
//         int ar[n];
//         int o=0,t=0,th=0,l=-1,m=-1;
//         bool b=false;
//         for(int i=0;i<n;i++){
//             cin>>ar[i];
//             if(ar[i]>3  || ar[i]<1){
//                  cout<<"wrong Input";
//                  return 0;
//             }
//             if(ar[i]==1){
//                 o++;
//             }
//             else if(ar[i]==2){
//                 t++;

//             }
//             else{
//                 th++;
//             }
//             if((o>=(t+th)) && m==-1 && l==-1){
//                 l=i;
//                 o=0,t=0,th=0;
//             }
//             else if(((o+t)>=th) && l!=-1 && m==-1 ){
//                 m=i;
//             }
//             else if((m<(n-1)) && l!=-1 && m!=-1){
//                 b=true;

//             }
//         }
//         if(b){
//             arr[z-1]=1;
//         }
//         else{
//             arr[z-1]=0;
//         }

        
        
       


//     }
//     for(int i=0;i<z;i++){
//         if(arr[i]){
//             cout<<"Yes"<<endl;

//         }else{
//             cout<<"No"<<endl;
//         }
//     }
//     return 0;

// }

#include <bits/stdc++.h>
using namespace std;
int count(int a,int b,int arr[],int c){
        int count=0;
        for(int i=a;i<=b;i++){
            if(arr[i]==c){
                count++;
            }
        }
        return count;
}
int main(){
    unsigned int t;
    cin>>t;
    int array[t];
    int z=-1;
    bool b=false;
    while(t--){
        b=false;
       
        z++;
        unsigned int n;
        cin>>n;
        if(n<3){
            cout<<"Wrong Input";
            break;
        }
        int ar[n];
         for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]>3  || ar[i]<1){
                 cout<<"wrong Input";
                 return 0;
            }
         }     
        for(int i=0;i<=n-3;i++){
            for(int j=i+1;j<=n-2;j++){
                int count1=count(0,i,ar,1);
                int count2=count(0,i,ar,2);
                int count3=count(0,i,ar,3);
                bool l = (count1 >= count2 + count3);
                
                count1=count(i+1,j,ar,1);
                count2=count(i+1,j,ar,2);
                count3=count(i+1,j,ar,3);
                bool m = (count1 + count2 >= count3);
                if(l && m){
                    b=true;
                    break;
                }
                
            }
        }
        if(b){
            array[z]=1;
        }
        else{
            array[z]=0;
        }





    }
    for(int i=0;i<=z;i++){
        if(array[i]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }




    return 0;
}