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
        cin >> n >>x;
        vector<ll> a(n);
        inputArray(a);
        int cnt=0,cnt1=0;
        for(int i=0;i<n;i++){
           if(a[i]>x){
             cnt++;
           }
           if(a[i]<x){
             cnt1++;
           }
        }
        if(cnt+cnt1==n&&(cnt!=0&&cnt1!=0)){
           cout<<"No"<<endl;
        }else{
           cout<<"Yes"<<endl;
        }
        
    }

    return 0;
}