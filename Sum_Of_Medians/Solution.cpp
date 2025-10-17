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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n*k);
        inputArray(a);
       
       
        ll ans=0;
        ll right=n*k;
        while(k--){
           right-=(n/2 + 1);
           ans+=a[right];
        }

        cout<<ans<<endl;
    }

    return 0;
}
