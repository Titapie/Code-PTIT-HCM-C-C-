#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class ds {
    public:
        string id ;
        string ma;
        int sosv;
        void doc ()
        {
            int  c; string a,b;
            getline(cin,a);
            getline(cin,b);
            cin>>c;
            cin.ignore();
            id = a; ma=b; sosv=c;
        }
    
};
bool check (ds m, ds n)
{
    if (m.sosv == n.sosv) return m.id<n.id ; else return m.sosv>n.sosv;
}
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t,k;
    cin>>t;
    cin.ignore();
    ds n[100];k=t;
    while(t!=0)
    {
        t--;
        n[k-t].doc();
    }
    sort(n+1,n + k + 1,check);
    for ( int i =1; i<=k; i++)
    cout<<n[i].id<<" "<<n[i].ma<<" "<<n[i].sosv<<endl;

    return 0;
}
// 4
// VIETTEL
// TAP DOAN VIEN THONG QUAN DOI VIETTEL
// 40
// FSOFT
// CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
// 300
// VNPT
// TAP DOAN BUU CHINH VIEN THONG VIET NAM
// 200
// SUN
// SUN*
// 50