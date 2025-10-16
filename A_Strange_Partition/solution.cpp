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
        ll n,x;
        cin >> n >> x;
        vector<ll> a(n);
        inputArray(a);
        ll maxi=0;
        ll mini=0;
        for(int i=0;i<n;i++){
          mini+=a[i];
          maxi+=ceil((1.0*a[i])/x);
           
        }
        mini=ceil((mini*1.0)/x);
        cout<<mini<<" "<<maxi<<endl;
        
    }

    return 0;
}