#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <queue>
#include <string>
#include <vector>
#include <deque>
#include <limits.h>
#include <map>
#include <set>
// shivammishra
#define ll long long
#define dd double
#define endl '\n'
using namespace std;
void Speed()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

void solve()
{
  ll a, b, k;
  cin >> a >> b >> k;

  if (a % k == 0 && b % k == 0)
  {
    cout << "Both";
  }
  else if (a % k == 0 && b % k != 0)
  {
    cout << "Memo";
  }
  else if (a % k != 0 && b % k == 0)
  {
    cout << "Momo";
  }
  else
  {
    cout << "No One";
  }
}

int main()
{
  Speed();

  // int t; 
  // cin >> t;
  // while (t--)
    solve();

  return 0;
}
