#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,i,j,k,l,m,n;
       k=1;
        cin>>n;
        while (n!=0)
        {
            k=k*(n%10);
            n=n/10;
        }
        cout<<k<<endl;
    

    return 0;
}