#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n,a[101][101]={0} , b[101][101]={0};
    cin>>t;
    while(t!=0)
    {
        t--;
    cin>>n>>m;
    for (i=1;i<=n; i++)
    for (j=1;j<=m; j++)
    cin>>a[i][j];
    k=0;l=0;
     while (k<n*m)
    {   l++;
        if (k>=n*n-1) {break;}
        for (i=l; i<=n-l+1;i++)
        {   k++;
            if (i==l) {b[l][i]=a[l+1][i];} else {b[l][i]=a[l][i-1];}
        }
       if (k>=n*n-1) {break;}
        for (i=l+1; i<=n-l;i++)
        {   k++;
            if (i==l+1) {b[i][n-l+1]=a[i-1][n-l+1];} else b[i][n-l+1]=a[i-1][n-l+1];
        }
        if (k>=n*n) {break;}
        for (i=n-l+1; i>=l+1;i--)
        {   k++;
            if (i==n-l+1) b[n-l+1][i]=a[n-l][i]; else {b[n-l+1][i]=a[n-l+1][i+1];}
        }
        if (k>=n*n) {break;}
        for (i=n-l+1; i>=l+1;i--)
        {   k++;
            if (i==n-l+1) b[i][l]=a[i][l+1]; else b[i][l]=a[i+1][l];
        }
        
    }
    if (n%2==1) {b[n/2+1][n/2+1]=a[n/2+1][n/2+1];}
    for (i=1;i<=n; i++)
    {
        for (j=1;j<=m; j++)
    cout<<b[i][j]<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}