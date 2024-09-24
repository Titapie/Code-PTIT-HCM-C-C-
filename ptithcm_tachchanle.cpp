#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n,k,i,l,m,a[100000];
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        if (a[i] % 2 ==0) {cout<<a[i]<<" ";}
    }
    cout<<"\n";
    for (i=1; i<=n; i++)
    {
        if (a[i] % 2 ==1) {cout<<a[i]<<" ";}
    }
    return 0;
}