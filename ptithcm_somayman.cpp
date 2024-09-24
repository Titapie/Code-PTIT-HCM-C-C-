#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,a,b;
    cin>>t;
    while ( t!=0)
    {
        t--;
        cin>>a;
        (a%100==86) ? cout<<"1\n" : cout<<"0\n";
    }

    return 0;
}