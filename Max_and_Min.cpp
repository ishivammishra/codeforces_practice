#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll a,b,c;
  cin>>a>>b>>c;
  ll mini = min(min(a,b),c); 
  ll maxi = max(max(a,b),c);
  cout<<mini<<" "<<maxi;
  return 0;
}



// min and max function can only take 2 values in them