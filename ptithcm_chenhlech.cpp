#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,i,j,k,l,m,n;
    cin>>t;
    while ( t!=0)
    {
        t--;
        cin>>n;
        int a[100000];
    
        for (i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+1+n);
        k=a[2]-a[1];
        for ( i=2; i<n; i++)
        k=min(a[i+1]-a[i],k);
        cout<<k<<endl;
    }

    

    return 0;
}