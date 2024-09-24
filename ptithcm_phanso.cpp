#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ucln(ll a,ll b)
{   
    if (a%b==0) return b; else {return ucln(b%a,a);}
}
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll a,b;
    cin>>a>>b;
    cout<<a/ucln(a,b)<<"/"<<b/ucln(a,b);
    

    return 0;
}