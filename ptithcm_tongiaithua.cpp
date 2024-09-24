#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    unsigned long long s,a;
    cin>>n;
    a=1;
    for (int i=1;i <=n; i++)
    {
        a=a*i;
        s=s+a;
    }
    cout<<s;
    return 0;
}