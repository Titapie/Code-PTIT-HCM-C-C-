#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n,i,a[10000],j,k=0,l,m;
    cin>>n;
    for ( i =1 ; i<=n; i++)
    {cin>>a[i];if (a[i]%2 == 0) {k++;}}
    i=1;j=n;
    while (i<j)
    {

        while (a[i] %2 == 0) i++;
        while (a[j] %2 == 1) j--;
        if(i<=j) {swap(a[i],a[j]);}
    }
    sort(a+1,a+1+k);
    sort(a+1+k,a+1+n);
    for (i=1;i<=n; i++) cout<<a[i]<<" ";
    

    return 0;
}