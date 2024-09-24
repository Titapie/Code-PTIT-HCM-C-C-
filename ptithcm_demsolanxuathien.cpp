#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k=0,l,m,n,a[1000],b[1000]={0},c[1000];
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>> a[i];
        if (b[a[i]]==0) { k ++ ; c[k]=a[i];} b[a[i]]++;
    }
    for ( i =1; i<=k; i++ ) cout<<c[i]<<" "<< b[c[i]]<<"\n";
    return 0;
}