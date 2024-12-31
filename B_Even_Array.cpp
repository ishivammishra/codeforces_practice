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
  int n;
  cin >> n;
  int a[n];

  int even_index = 0, odd_index = 0, even_ele = 0, odd_ele = 0;
  int non_matching = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];

    if (i % 2 == 0)
      even_index++;

    else
      odd_index++;

    if (a[i] % 2 == 0)
      even_ele++;

    else
      odd_ele++;

    if (i % 2 != a[i] % 2)
    {
      non_matching++;
    }
  }

  if (even_index != even_ele || odd_index != odd_ele)
  {
    cout << -1 << endl;
    return;
  }

  cout << non_matching / 2 << endl;
}

int main()
{
  shivam_speed();

  int t;
  cin >> t;
  while (t--)
    solution();

  return 0;
}
