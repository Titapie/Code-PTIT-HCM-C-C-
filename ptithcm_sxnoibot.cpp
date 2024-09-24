#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,m,n,o=0,a[1000];
    cin>>n;
    for ( i=1 ; i<= n; i++)
    cin>>a[i];
    for (i=1; i<=n-1; i++)
    { m=0;
        for (j=1; j<=n-1; j++)
    {
        if (a[j]>a[j+1]) {swap(a[j],a[j+1]); m=1;}
    }
    if (m!=0){ o++;
    cout<<"Buoc "<<o<<": ";
    for (l=1;l<=n; l++) cout<<a[l]<<" ";cout<<"\n";} else {break;}
    }
    return 0;
}