#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n;
    cin>>t;
    while (t!=0)
    {
        t--;
        cin>>n;
        bool a[10]={0};
        for (i=1;i<=n; i++)
        {
            cin>>k;
            while (k!=0)
            {
                a[k%10]=1;
                k=k/10;
            }
        }
        for (i=0; i<10; i++) if (a[i]==1) cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}