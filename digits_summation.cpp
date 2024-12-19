#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll N,M;
    cin>>N>>M;
    int ld_1 = N % 10;
    int ld_2 = M % 10;
    
    int summation = ld_1 + ld_2;
    cout<< summation;
    
    return 0;
}