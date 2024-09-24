#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    freopen("DATA.in","r",stdin);
    ll i,j,k,l,m,n=0;
    map<int , int> a;
    while (cin>>n)
    {
   
    a[n]=a[n]+1;
    }
    for ( auto x:a)
    cout<<x.first<<" "<<x.second<<endl;

    return 0;
}