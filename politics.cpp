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

void solution()
{
  // main code starts here
  int n, k;
  cin >> n >> k;
  string s[n];
  int ans = n;
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
    if (s[i] != s[0])
    {
      ans--;
    }
  }
  cout << ans << endl;
}

int main()
{
  Speed();

  int t;
  cin >> t;
  while (t--)
    solution();

  return 0;
}
