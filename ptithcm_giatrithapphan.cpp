#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n;
    double a;
    cin>>n;
    for (int i=1 ; i<= n; i++)
    {
    cin>>a;
    cout<<fixed<<setprecision(15)<<1/a<<"\n";
    }
    return 0;
}