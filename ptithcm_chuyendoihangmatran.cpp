#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a[100][100],i,j,k,l,m,n;
    cin>>n>>m;
    for (i=1; i<=n; i++)
    {
        for ( j =1 ; j<=m; j++)
        cin>>a[i][j];
    }


    cin>>k>>l;
    for (i=1; i <=m ; i++)
    swap(a[k][i],a[l][i]);
    for (i=1; i<=n; i++)
    {
        for ( j =1 ; j<=m; j++)
        cout<<a[i][j]<<" ";
        cout<<"\n";
    }

    return 0;
}