#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a,b,i,j,k,l,m,n;
    cin>> a>>b;
    bool c [1000001]={0};
    c[0]=1;
    c[1]=1;

    for ( i =2; i*i<=1000001;i++)
    {
        if (c[i]==0) { for (j=i*i;j<=1000000;j=j+i) c[j]=1;}
    }
    for (i=min(a,b); i<=max(a,b); i++) if (c[i]==0) cout<<i<<" ";
    return 0;
}