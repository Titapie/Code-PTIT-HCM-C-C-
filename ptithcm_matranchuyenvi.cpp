#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a[102][102],i,j,k,l,n,m;
    cin>>n>>m;
    for (i=1; i<=n ; i++)
    for (j=1; j<=m; j++)
    {
        cin>>a[i][j];
    }
    for ( i= 1 ; i<=m ; i++)
    {
        for ( j= 1 ; j<=n ; j++)
    {
        cout<<a[j][i]<<" ";
    }
    cout<<"\n";
    }
    

    return 0;
}