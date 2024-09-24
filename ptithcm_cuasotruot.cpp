#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,m,n,t,a[100][100],b[100][100];
    cin>>n;
    for ( i=1; i<=n; i++)
    for (j =1; j<=n; j++)
    {
        cin>>a[i][j];
    }
    cin>>m;
    for (i=1; i<=m; i++)
    for (j=1; j<=m; j++)
    cin>>b[i][j];
    for (i=1; i<=n; i++)
    for (j=1; j<=n; j++)
    {
        k=i% m; if (k==0) k=m;
        l=j% m ; if (l==0) l = m;
        a[i][j]=a[i][j]*b[k][l];
    }
    for (i=1; i<=n; i++)
    
    {
        for (j=1; j<=n; j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}