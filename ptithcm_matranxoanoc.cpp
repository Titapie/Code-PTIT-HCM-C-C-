#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,m,n,a[101][101]={0};
    cin>>n;k=0;l=0;
    while (k<n*n)
    {   l++;
        if (k>=n*n-1) {break;}
        for (i=l; i<=n-l+1;i++)
        {   k++;
            a[l][i]=k;
        }
       if (k>=n*n-1) {break;}
        for (i=l+1; i<=n-l;i++)
        {   k++;
            a[i][n-l+1]=k;
        }
        if (k>=n*n) {break;}
        for (i=n-l+1; i>=l+1;i--)
        {   k++;
            a[n-l+1][i]=k;
        }
        if (k>=n*n) {break;}
        for (i=n-l+1; i>=l+1;i--)
        {   k++;
            a[i][l]=k;
        }
        
    }
    if (n%2==1) {a[n/2+1][n/2+1]=n*n;}
    for (i=1; i<=n; i++)
    {
        for ( j=1 ; j<=n; j++)
    cout<<a[i][j]<<" ";
    cout<<"\n";
    }

    return 0;
}