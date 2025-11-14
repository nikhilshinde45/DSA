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
        string s;
        cin>>s;
        int n=s.length();
        // vector<ll> a(n);
        // inputArray(a);
        int cnt=0;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
          if(s[i]=='<') {
            cnt++;
          }else if(s[i]=='*'){
            cnt1++;
          }else{
            cnt2++;
          }
        }
        string str=string(cnt,'<')+string(cnt1,'*')+string(cnt2,'>');

        if(str!=s){
          cout<<-1<<endl;
          continue;
        }
        if(cnt1>1){
          cout<<-1<<endl;
          continue;
        }
        cout<<max(cnt+cnt1,cnt1+cnt2)<<endl;
        
    }

    return 0;
}
hitman 
for(int i=0;)