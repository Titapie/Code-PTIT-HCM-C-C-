#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct nv {
string dc;string mst; string ma;string ten;string nk;string gt;string ns;
};
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    nv n;
    n.ma="00001";
    getline(cin,n.ten);
    cin>>n.gt;
    cin>>n.ns;
    cin.ignore();
    getline(cin,n.dc);
    cin>>n.mst;
    cin>>n.nk;
    cout<<n.ma<<" "<<n.ten<<" "<<n.gt<<" "<<n.ns<<" "<<n.dc<<" "<<n.mst<<" "<<n.nk;
    

    return 0;
}