#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k=0,l,m,n,vt,Max,a[10000];
    cin>>n;
    for (i=1;i<=n;i++)
    cin>>a[i];
    for (i=1; i<=n-1; i++)
    {
        Max= a[i];vt=i;
        for (j=i+1; j<=n;j++) 
        if ( a[j]<Max) { Max = a[j];vt=j;}
        
                        swap (a[i],a[vt]); cout<<"Buoc "<<i<<": ";
                        for (j=1;j <=n; j++) cout<< a[j]<<" ";cout<<"\n";
                      
    }

    return 0;
}