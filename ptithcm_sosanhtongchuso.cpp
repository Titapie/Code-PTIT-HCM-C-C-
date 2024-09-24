#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tongcs(ll n)
{
    int g=0;
    while (n !=0)
    {
        g=g+n%10;
        n=n/10;
    }
    return g;
}
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll a,b;
    cin>>a>>b;
    if (tongcs(a)>tongcs(b)) {cout<<b<<" "<<a;} else {cout<<a<<" "<<b;}
    return 0;
}