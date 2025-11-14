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
    ll n, aa;

    cin >> n >> aa;

    //  ll n;
    // cin >> n;
    vector<ll> a(n);
    inputArray(a);
    ll b1 = aa - 1;
    ll b2 = aa + 1;
    ll cnt1 = 0, cnt2 = 0;
    for (ll i = 0; i < n; i++)
    {
      if (a[i] == aa)
        continue;
      if (abs(a[i] - b1) < abs(a[i] - aa))
      {
        cnt1++;
      }
      if (abs(a[i] - b2) < abs(a[i] - aa))
      {
        cnt2++;
      }
    }
    if (cnt1 > cnt2)
    {
      cout << b1 << endl;
    }
    else
    {
      cout << b2 << endl;
    }
  }

  return 0;
}