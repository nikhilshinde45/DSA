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
        string s;
        cin>>s;
        // vector<ll> a(n);
        // inputArray(a);
        ll cnt=0;
        vector<int>vec;
        for(ll i=0;i<n;i++){
           if(s[i]=='1'){
             cnt++;
             vec.push_back(i+1);
            

           }
        }
       cout<<cnt<<endl;
       int n2=vec.size();
       for(int i=0;i<n2;i++){
         cout<<vec[i]<<" ";
       }
        cout<<endl;
    }

    return 0;
}