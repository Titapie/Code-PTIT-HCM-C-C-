#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ucln (ll a, ll b)
{
    if (a % b ==0) { return b;} else {return ucln( b,a%b);}
}
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll a, b;
    cin>>a>>b;
    cout<<ucln(a,b)<<"\n";
    cout<<a*b/ucln(a,b);
    return 0;
}