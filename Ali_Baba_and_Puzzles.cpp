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
// shivammishra.2522
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
  // main code starts here
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  string output;
  if (a + b - c == d)
    output = "YES";
  else if (a - b + c == d)
    output = "YES";
  else if (a + b * c == d)
    output = "YES";
  else if (a - b * c == d)
    output = "YES";
  else if (a * b + c == d)
    output = "YES";
  else if (a * b - c == d)
    output = "YES";
  else
    output = "NO";

  cout<<output<<endl;
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
