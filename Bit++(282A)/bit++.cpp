#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 0;
    int y;
    cin >> y;
    for(int i = 0; i<y; i++){
        string a;
        cin >> a;
        if(a[1] == '+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x << endl;
    return 0;
}

