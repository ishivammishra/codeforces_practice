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
  int b[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  for (int j = 0; j < n; j++)
  {
    cin >> b[j];
  }
  sort(b, b + n);
  
  int flag = 0;
  
  for (int k = 0; k < n; k++)
  {
    if (a[k] != b[k])
    {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    cout << "yes" << endl;

  else
    cout << "no" << endl;
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
