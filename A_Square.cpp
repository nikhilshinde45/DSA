#include <bits/stdc++.h>
using namespace std;

#define ll long long

void inputArray(vector<ll>& a) {
    for (int i = 0; i < (int)a.size(); ++i) {
        cin >> a[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        // vector<ll> a(n);
        // inputArray(a);
        if(a==b&&b==c&&c==d){
           cout<<"YES"<<endl;
        }else{
           cout<<"NO"<<endl;
        }
        
    }

    return 0;
}