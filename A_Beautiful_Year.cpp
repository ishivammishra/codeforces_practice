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

bool hasdistinct(int year)
{
  set<int> digits;
  while(year>0)
  {
    int digit = year % 10;
    if(digits.count(digit))
    {
      return false;
    }

    digits.insert(digit);
    year/=10;
  }
  return true;
}

void solution()
{
  // main code starts here
  int y;
  cin >> y;
  while(true)
  {
    ++y;
    if(hasdistinct(y))
    {
      cout << y << endl;
      break;
    }
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
