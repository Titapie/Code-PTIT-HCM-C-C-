#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{

    ifstream f1("DATA1.in"),f2("DATA2.in");
    string s;
    set<string> a,b,c;
    while (!f1.eof())
    {   
        f1>>s;
        for (int i=0; i<s.length(); i++)
        {if (s[i]>='A' && s[i]<='Z') s[i]=char(int(s[i])+32);}
        a.insert(s);
    }
    s="";
    while (!f2.eof())

    {   
        f2>>s;
        for (int i=0; i<s.length(); i++)
        {if (s[i]>='A' && s[i]<='Z') s[i]=char(int(s[i])+32);}
        b.insert(s);
       
    }
  
   
    for (auto x:a) c.insert(x);
    for (auto x:b) c.insert(x);
    for (auto x:c) cout<<x<<" ";cout<<endl;
    for(auto g:a)
    if ( b.count(g)!=0) cout<<g<<" ";
    f1.close();
    f2.close();
    return 0;
}