#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n,i,j,k,l,m,a[10000];
    cin>>n;
     for( i=1 ; i <=n; i++)
     cin>>a[i];
     for (i=1; i<=n-1 ; i++)
     {
        for (j=i+1; j<=n; j++)
        {
            if (a[i]>a[j]) {swap(a[i],a[j]);}
        }
        cout<<"Buoc "<<i<<": ";
        for (j=1;j<=n; j++)
        cout<<a[j]<<" ";cout<<"\n";
     }

    return 0;
}