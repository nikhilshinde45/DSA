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
        vector<ll> a(n);
        inputArray(a);
        unordered_map<int,int>mp;
        for (ll i=0;i<n;i++){
           mp[a[i]]++;
        }
        ll todel=0;
        for(auto it:mp){
          if(it.first==it.second) continue;
          else if(it.second<it.first){
            todel+=it.second;
          }
          else {
            todel+=abs(it.first-it.second);
          }

        }
        cout<<todel<<endl;
        
    }

    return 0;
}