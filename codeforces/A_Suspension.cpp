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
        // inputArray(a)
        ll y,r,n;
        cin>>n;

        cin>>y>>r;
        int cnt=r+floor(y/2);
        if(cnt>n){
           cout<<n<<endl;
        }else
       { cout<<cnt<<endl;}
        
    }

    return 0;
}