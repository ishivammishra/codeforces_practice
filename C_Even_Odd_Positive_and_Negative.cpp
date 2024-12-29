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
  vector<int> a(n);
  int even_count = 0;
  int odd_count = 0;
  int pos_count = 0;
  int neg_count = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] % 2 == 0)
    {
      even_count++;
    }
    else
    {
      odd_count++;
    }

    if (a[i] > 0)
    {
      pos_count++;
    }
    else if(a[i] < 0)
    {
      neg_count++;
    }
  }
  cout << "Even: " << even_count << endl;
  cout << "Odd: " << odd_count << endl;
  cout << "Positive: " << pos_count << endl;
  cout << "Negative: " << neg_count << endl;
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