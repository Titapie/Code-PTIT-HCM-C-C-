#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct sv{
    string ms, ten, lop, mail;
};
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    sv n[1000];ll i,j,k=0,l,m,t;
    cin>>t;
    while(k<t)
    {
        k++;
        cin>>n[k].ms;
        cin.ignore();
        getline(cin,n[k].ten);
        cin>>n[k].lop;
        cin>>n[k].mail;
    }
    for (i=1; i<=k; i++)
    for (j=i+1; j<=k; j++)    
    if (n[i].lop>n[j].lop) swap(n[i],n[j]); else{ if (n[i].lop==n[j].lop) if (n[i].ms>n[j].ms) swap(n[i],n[j]);}
    for (i=1; i<=k; i++)
    cout<<n[i].ms<<" "<<n[i].ten<<" "<<n[i].lop<<" "<<n[i].mail<<endl;
    return 0;
}
// B16DCCN011
// Nguyen Trong Duc Anh
// D16CNPM1
// sv1@stu.ptit.edu.vn
// B15DCCN215
// To Ngoc Hieu
// D15CNPM3
// sv2@stu.ptit.edu.vn
// B15DCKT150
// Nguyen Ngoc Son
// D15CQKT02-B
// sv3@stu.ptit.edu.vn
// B15DCKT199
// Nguyen Trong Tung
// D15CQKT03-B
// sv4@stu.ptit.edu.vn