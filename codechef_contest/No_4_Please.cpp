#include <bits/stdc++.h>
using namespace std;

int main()
{
  ///////wh ballebaz....
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    int cntone = 0, cnttwo = 0, cntthree = 0;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x == 1)
        cntone++;
      else if (x == 2)
        cnttwo++;
      else if (x == 3)
        cntthree++;
    }

    int c;
    if (cnttwo > 0)
    {
      c = max(cntone, cntthree) + 1;
    }
    else
    {
      c = max(cntone, cntthree);
    }

    int co = n - c;

    cout << co << endl;
  }

  return 0;
}
