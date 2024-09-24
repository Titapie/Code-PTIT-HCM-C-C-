#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n,a[1001]={0};
    cin>>n;
    for ( i=1; i<=n; i++)
    {
        cin>>k;
        a[k]=1;
    }
    for (i=1;i<=1000;i++)
    if (a[i]>0) cout<<i<<" ";

    return 0;
}