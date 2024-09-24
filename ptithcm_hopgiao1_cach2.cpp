#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100001],b[100001],g=0;
        ll c[100001],d[100001];
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,m,n,t;
    cin>>t;
    while(t!=0)
    {
        t--;
        cin>>n>>m;
        
        for (i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for (i=1; i<=m; i++)
        {
            cin>>b[i];
        }
        sort(a+1,a+1+n);
        sort(b+1,b+1+m);
        i=1; j=1;k=0;l=0;
        while (i<=n && j<=m)
        {
            if (a[i]<b[j]) {k++;c[k]=a[i];i++;} else if ( a[i]>b[j]) { k++; c[k]=b[j]; j++;} else {k++;l++; c[k]=a[i];d[l]=a[i];i++; j++;}
        }
        for (g=i; g <= n ; g++)
        {
            k++;c[k]=a[g];
        }
        for (g=j; g <= m ; g++)
        {
            k++;c[k]=b[g];
        }
        for ( i=1; i<=k; i++) cout<<c[i]<<" ";cout<<endl;
        for ( i=1; i<=l; i++) cout<<d[i]<<" ";cout<<endl;
    }
    return 0;
}