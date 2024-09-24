#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n;
    cin>>t;
    while ( t!=0)
    {
        t--;
        cin>>n;
        k=0;
        bool b[1000001]={0};
        for (i=1;i<=n; i++)
        {
            cin>>k;
            if (k>0) b[k]=1;
        }
        for (i=1; i <=1000000; i++)
        if (b[i]==0) {cout<<i<<endl;break;}
    }

    return 0;
}