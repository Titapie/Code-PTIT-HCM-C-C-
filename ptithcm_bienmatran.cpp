#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,m,n,t;
    cin>>t;
    while (t!=0)
    {
        t--;
        cin>>n;
        for ( i = 1; i <= n ; i ++)
        {
            for ( j = 1; j <= n ; j ++)
        {
            cin>>k;
            if (i==1 || j == 1 || i==n || j==n) cout<<k<<" "; else cout<<"  ";
        }
        cout<<endl;
        }
    }

    return 0;
}