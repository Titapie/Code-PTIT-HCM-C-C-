#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct nv 
{
    string ten;
    ll d,m,y;
};
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll i,j,k,l,m,n;
    cin>>n;
    cin.ignore();string s;nv a[100];
    for (i=1;i <=n; i++)
    {
        getline(cin,s);
        string st;
        for ( j =0; j<s.length(); j++)
        if (s[j]!=' ') { a[i].ten=a[i].ten+s[j];} else break;
        a[i].d=(int(s[s.length()-10])-48)*10 + int(s[s.length()-9])-48;
        a[i].m=(int(s[s.length()-7])-48)*10 + int(s[s.length()-6])-48;
        a[i].y=(int(s[s.length()-4])-48)*1000 + (int(s[s.length()-3])-48)*100+(int(s[s.length()-2])-48)*10 + int(s[s.length()-1])-48;
    }
    ll v1=1,v2=1;// v1 la gia v2 la tre
     for (i=2;i <=n; i++) 
     {
        if (a[i].y <a[v1].y) {v1=i;} else if (a[i].y ==a[v1].y){ if (a[i].m<a[v1].m) {v1=i;} else if (a[i].m==a[v1].m) {if (a[i].d<a[v1].d) {v1=i;}} }
        if (a[i].y >a[v2].y) {v2=i;} else if (a[i].y ==a[v2].y) { if (a[i].m>a[v2].m) {v2=i;} else if (a[i].m ==a[v2].m) {if (a[i].d>a[v2].d) {v2=i;}} }

     }
     cout<<a[v2].ten<<endl<<a[v1].ten;

    return 0;
}