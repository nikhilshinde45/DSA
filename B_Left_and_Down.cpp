#include <bits/stdc++.h>
using namespace std;
long long gccd(long long a,long long b){

  while(b!=0){
    long long temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        // int n;
        // cin >> n;
        // vector<int> a(n);
        // for (int i = 0; i < n; ++i) {
        //     cin >> a[i];
        // }
        long long a,b,k;
        cin>>a>>b>>k;
        long long gd=gccd(a,b);
        long long a1=a/gd;
        long long b1=b/gd;
        if(a1<=k&&b1<=k){
          cout<<1<<endl;
        }else{
          cout<<2<<endl;
        }

       
    }

    return 0;
}