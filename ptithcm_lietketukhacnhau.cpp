#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    freopen("VANBAN.in","r",stdin);
    string s;set<string> a;
    while(cin)
    {
        cin>>s;
        for (int i=0; i<s.length(); i++)
        {if (s[i]>='A' && s[i]<='Z') s[i]=char(int(s[i])+32);}
        a.insert(s);
    }
    for ( auto x: a) cout<<x <<endl;

    return 0;
}