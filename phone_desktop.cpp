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
  int x, y;
  cin >> x >> y;
  int need = (y + 1) / 2;
  while (15 * need < x + 4 * y)
  {
    need++;
  }
  cout << need << endl;
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
