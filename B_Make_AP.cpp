#include <bits/stdc++.h>
using namespace std;


int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if((a==b&&b==c)||(2*b-a)%c==0&&(2*b-a)/c>0||(c+a)%(2*b)==0||(2*b-c)%a==0&&(2*b-c)/a>0){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
       
    }
    return 0;
}
