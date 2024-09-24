#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l=0,m,n,a[102][102];
    cin>>t;
    while ( t!=0)
    {
        t--; l++;
        cin>>n>>m;
        for (i=1; i<=n; i++)
        for (j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
        cout<<"Test "<<l<<":\n";
        for (i=2; i<=n; i++)
        {
            for (j=2; j<=m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
        }
    }

    return 0;
}