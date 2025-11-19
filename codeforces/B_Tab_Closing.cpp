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
        // ll n;
        // cin >> n;
        // vector<ll> a(n);
        // inputArray(a);
        ll a,b,n;
        cin >> a >> b >> n ;
        if(a==b&&b<n){
           cout<<1<<endl;
           continue;

        }
        if(n*b>a&&b!=a){
           cout<<2<<endl;
        }else{
           cout<<1<<endl;
        }
        
    }

    return 0;
}