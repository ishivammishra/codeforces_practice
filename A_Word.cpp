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
void shivam_speed()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

void solution()
{
  // main code starts here
  string s;
  cin >> s;
  int n = s.size();
  int lower = 0;
  int upper = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
      upper++;
    }
    else
    {
      lower++;
    }
  }

  if (upper > lower)
  {
    for (int i = 0; i < n; i++)
    {
      s[i] = toupper(s[i]);
    }
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      s[i] = tolower(s[i]);
    }
  }

  cout << s << endl;
}

int main()
{
  shivam_speed();

  // int t;
  // cin >> t;
  // while (t--)
  solution();

  return 0;
}
