#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n,i,j,a[10000];
    cin>>n;
    for (i=1; i<=n ; i++)
    cin>>a[i];
    sort(a+1,a+1+n);
    for (i =1; i<=n; i++)
    cout<<a[i]<<" ";

    return 0;
}