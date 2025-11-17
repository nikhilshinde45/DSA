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
    //     int cnt=0;
    //     int k=1;
    //    for(int i=0;i<n;i++){
    //     if(a[i]==0){
    //       cnt++;
    //     }
    //     if(a[i]==0&&i!=0){
    //  k++;
    //     }
    //    }
    //    int cnt2=0;
    //    for(int i=0;i<n-1;i++){
    //     if(a[i]==a[i+1]&&a[i]==0){
    //       cnt2++;
    //     }
    //    }
    //    if(cnt==0){
    //     cout<<1<<endl;
    //     continue;
    //    }
    //    if(cnt==n){
    //     cout<<0<<endl;
    //     continue;
    //    }
    //    if((cnt==1&&a[0]==0)||(cnt==1&&a[n-1]==0)){
    //     cout<<1<<endl;
    //     continue;

    //    }
    //    cout<<k-1-cnt2<<endl;
    //     int left=0;
    //     int right=0;
    //     int cnt=0;
    //     int s=0;
    //     for(int i=0;i<n;i++){
    //       s+=a[i];
    //       if(a[i]==0&&left==0){
    //         left=i;
           
    //       }else if(a[i]==0&&(right==0&&left!=0)){
    //         right=i;
    //          if(abs(left-right)>1){
    //         cnt++;
    //       }
    //       left=right;
    //       right=0;
    //       }
         
    //     }
    //     if(s==0){
    //       cout<<0<<endl;
    //       continue;
    //     }
    //     cout<<cnt+1<<endl;
    // }
    ll k=0;
    ll l=n;
    ll s=0;
    ll cnt=0;
    for(int i=0;i<n;i++){
     s+=a[i];
     if(a[i]==0){
      cnt++;
    }
    }
    if(s==0){
      cout<<0<<endl;
      continue;
    }
    if(cnt==1&&a[0]==0){
      cout<<1<<endl;
      continue;
    }
    if(cnt==0&&a[n-1]==0){
      cout<<1<<endl;
      continue;

    }
    for(int i=0;i<n;i++){
      if(a[i]==0){
        k++;
    }else{
      break;
    }
    
    }
    for(int i=n-1;i>=0;i--){
      if(a[i]==0){
  l--;
      }else{
        break;
      }

    }
    int h=0;
    for(int i=k;i<l;i++){
      if(a[i]==0){
        h=1;
        break;
      }
    }
    if(h==1){
      cout<<2<<endl;
      
    }else{
      cout<<1<<endl;
    }

    }
    return 0;
}