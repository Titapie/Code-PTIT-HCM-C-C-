#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n,i,j,k,l,m;
    cin>>n;
    l=n;
    if ( n % 2 ==0)
    {
        n=1;
        for (i=1; i<l; i++)
        n=n*10;
    }m=0;
   for (i=n; i <=n*10-1;i++)
    {
        
        k=(i/100000)%2 + ( i %100000)/10000 % 2 + (i%10000)/1000 %2 + (i%1000)/100%2 +(i%100)/10%2+i%10%2;

        if (l/2==k) {cout<<i<<" ";m++; if (m % 10==0) cout<<endl; }
    }

    return 0;
}