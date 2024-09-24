#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
   

    ll a[10000]={0},b[10000]={0},Max=-1,i,j,t,k,l=0,m,n;
    cin>>t;
    while (t!=0)
    {   
        t--; Max= -1;k=0;l++;
        cin>>n;
        for (i=1; i<=n; i++)
        {
            cin>>a[i];
            if (a[i]>a[i-1]) {b[i]=b[i-1]+1; } else {b[i]=1;}
            Max =max(Max, b[i]);
        }
        cout<<"Test "<<l<<":\n";
        cout<<Max<<"\n";
        for ( i=1; i<=n; i++)
        if (b[i]==Max) { for (j=i-Max+1; j<=i; j++) cout<<a[j]<<" ";cout<<"\n";}
    }
    return 0;
}