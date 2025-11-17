#include <bits/stdc++.h>
using namespace std;

#define ll long long

void inputArray(vector<ll> &a)
{
  for (int i = 0; i < (int)a.size(); ++i)
  {
    cin >> a[i];
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    // vector<ll> a(n);
    // inputArray(a);
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = n-2; i >=0; i--)
    {
     if(s[i]!=s[n-1]) cnt++;
    }
    // int cnt1=0;
    // for(int i=cnt+1;i<n;i++){
    //   if(s[i]!=s[0]){ cnt1++;}
    //     }
        cout<<cnt<<endl;
  }

  return 0;
}