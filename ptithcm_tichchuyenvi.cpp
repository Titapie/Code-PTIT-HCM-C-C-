#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a[100][100],i,j,o=0,k,l,m,n,t,b[100][100];
    cin>>t;
    while (t!=0)
    { t--;o++; cout<<"Test "<<o<<":\n";
    cin>>n>>m;
    for (i=1; i<=n; i++)
    for (j=1; j<=m; j++)
    cin>>a[i][j];
    for (i=1; i<=n; i++)
    for (j=1; j<=m; j++)
    b[j][i]=a[i][j];

    for (i=1; i<=n; i++)
   {
    for (j=1; j<=n; j++)
    {
        k=0;
        for (l=1; l<=m; l++)
        k=k+a[i][l]*b[l][j];
    cout<<k<<" ";
    }
    cout<<"\n";
   }}
    return 0;
}