#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,t,m,n;
    
    cin>>t;
    while (t!=0)
    {
        t--;
        cin>>n;
        long long a[100000];
        for ( i=1;i <=n; i++)
        cin>>a[i];
        int dem=0;
        i=1;j=n;k=a[i];l=a[j];
        while (i<j)
        {
            if (k<l) {i++;k=k+a[i];dem ++;} else if (k>l) {j--;l=l+a[j]; dem ++;} else {i++;j--;k=a[i];l=a[j];}
            
        }
        cout<<dem<<"\n";

    }

    return 0;
}