#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a=0,b=1,t,n,i;
    cin>>n;
    if (n==1) {cout<<a;} else 
    {
        if (n==2) {cout<<a<<" "<<b;}
     else 
    {
        cout<<a<<" "<<b<<" ";;

        for (i=3; i<=n; i++)
        { b=b+a;
          a=b-a;
          cout<<b<<" ";
        }
    }
    }


    return 0;
}