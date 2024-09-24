#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n;
    cin>>t;
    while (t!=0 )
    {
        t--;
        int a[101][101],b[101][101]={0};
        cin>>n>>m;
        for ( i=1; i<=n; i++)
        for ( j=1; j<=m; j++)
        {

            cin>>a[i][j];
            if ( a[i][j]==1) {for (l=1; l <=m; l++)b[i][l]=1;for (l=1; l <=n; l++) b[l][j]=1;}
        }
         for ( i=1; i<=n; i++)
        {
            for ( j =1; j<=m; j++)
            cout<<b[i][j]<<" ";
            cout<<endl;
        }

    }

    return 0;
}