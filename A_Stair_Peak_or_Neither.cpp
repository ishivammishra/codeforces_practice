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
    int a,b,c;
    cin >> a >> b >> c;
    if(a < b && b < c)
    {
        cout<<"STAIR"<<endl;
    }
    else if(a < b && b > c)
    {
        cout<<"PEAK"<<endl;
    }
    else
    {
        cout<<"NONE"<<endl;
    }
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