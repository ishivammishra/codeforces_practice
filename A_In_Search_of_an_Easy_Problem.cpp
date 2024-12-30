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
  int hard_count = 0;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    if(v[i] == 1)
    {
      hard_count++;
    }
  }
  if(hard_count > 0)
  {
    cout<<"HARD";
  }
  else
  {
    cout<<"EASY";
  }
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
