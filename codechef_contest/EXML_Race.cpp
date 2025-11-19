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
        ll n;
        cin >> n;
        // vector<ll> a(n);
        // inputArray(a);
        
        vector<int>a(n,0);
        int maxi=INT_MIN;
        int k=0;
        for(int i=0;i<n;i++){
           int u,v;
           cin>>u>>v;
           int x=u/v;
           if(x>maxi){
             maxi=x;
             k=i+1;

           }

        }
        cout<<k<<endl;
    }

    return 0;
}