#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t;
    cin>>t;
    while ( t!=0)
    {
        t--;
        string s="";
        cin>>s;
        ll dem=0,i=0;
        if (s.length()<=2 ) break; else 
        {
        while (i<s.length()-1)
        {
            if (s[i]=='1' && s[i+1]=='0' && s[i+2]=='0') {dem++;s.erase(i,3);if (i!=0) i--;} else i++;
        }
        }
        cout<<dem*3<<endl;
    }

    return 0;
}