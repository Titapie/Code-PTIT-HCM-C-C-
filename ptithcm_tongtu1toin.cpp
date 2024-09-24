#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a,b,c,n,y,t;
    cin>>t;
    while (t!=0)
    {
        t--;
        cin>>n;
        if ( n % 2 == 1) {cout<<(n+1)*(n-1)/2 + (n/2) +1<<endl;} 
                    else cout<<(n+1)*(n/2)<<endl;
    }

    return 0;
}