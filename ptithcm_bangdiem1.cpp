#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct bd{
    string ten="",lop="",ms="";
    float d1,d2,d3;
    
};
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    bd n[101];
    ll t,i,j,k,l;
    cin>>t;
    cin.ignore();
    l=0;
    while ( t!=l)
    {
         l++;
         getline(cin,n[l].ms);
         getline(cin,n[l].ten);
         getline(cin,n[l].lop);
         cin>>n[l].d1;
         cin>>n[l].d2;
         cin>>n[l].d3;
         cin.ignore();
        
    }
    for (i=1;i<=l ; i++)
    for (j=i+1;j<=l; j++)
    if (n[i].ms>n[j].ms) swap(n[i],n[j]);
    for (i=1; i<=l; i++)
    {
        cout<<i<<" "<<n[i].ms<<" "<<n[i].ten<<" "<<n[i].lop<<" ";
         cout<<setprecision(1)<<fixed<<n[i].d1<<" ";
         cout<<setprecision(1)<<fixed<<n[i].d2<<" ";
         cout<<setprecision(1)<<fixed<<n[i].d3<<"\n";
    }
    

    return 0;
}
//(int(n[i].ms[7])-48)*100+(int(n[i].ms[8])-48)*10+(int(n[i].ms[9])-48)>(int(n[j].ms[7])-48)*100+(int(n[j].ms[8])-48)*10+(int(n[j].ms[9])-48)