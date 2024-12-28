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
  int n;
  cin >> n;
  string s;
  cin >> s;

  // converting the string into lowercase
  for (int i = 0; i < n; i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
      s[i] = (s[i] - 'A' + 'a');
    }
  }

  vector<char> temp = {};
  char letter = s[0];

  for (int i = 1; i < n; i++)
  {
    if (s[i] != s[i - 1])
    {
      temp.push_back(letter);
      letter = s[i];
    }
  }
  temp.push_back(letter);
  vector<char> target = {'m', 'e', 'o', 'w'};

  cout << (temp == target ? "YES\n" : "NO\n");
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
