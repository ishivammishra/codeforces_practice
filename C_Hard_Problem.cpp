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
  int m, a, b, c;
  cin >> m >> a >> b >> c;

  int a_seated_monkey = min(a, m);

  int b_seated_monkey = min(b, m);

  int remaining_row1 = m - a_seated_monkey;
  int remaining_row2 = m - b_seated_monkey;

  int c_seated_monkey = min(c, remaining_row1 + remaining_row2);

  cout << a_seated_monkey + b_seated_monkey + c_seated_monkey << endl;
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
