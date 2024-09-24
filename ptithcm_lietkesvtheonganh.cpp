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
    while(t!=0)
    {
        k++;t--;
        cin>>n[k].ms;
        cin.ignore();
        getline(cin,n[k].ten);
        cin>>n[k].lop;
        cin>>n[k].mail;
    }
    cin>>t;cin.ignore();
    while(t!=0)
    {
        t--;
        string s;
        getline(cin,s);
        for ( i=0; i<s.length();i++) s[i]=char(toupper(int(s[i])));
        cout<<"DANH SACH SINH VIEN NGANH "<<s<<":"<<endl;
        char s1,s2,s3,s4; 
        if (s=="KE TOAN") {s1='D';s2='C';s3='K';s4='T';}
        if (s=="CONG NGHE THONG TIN") {s1='D';s2='C';s3='C';s4='N';}
        if (s=="AN TOAN THONG TIN") {s1='D';s2='C';s3='A';s4='T';}
        if (s=="VIEN THONG") {s1='D';s2='C';s3='V';s4='T';}
        if (s=="DIEN TU") {s1='D';s2='C';s3='D';s4='T';}
    for (i=1; i<=k; i++)
    {
        if (n[i].ms[3]==s1 && n[i].ms[4]==s2 && n[i].ms[5]==s3 && n[i].ms[6]==s4 ) 
        {
            if ((s3=='A' && s4=='T') || (s3=='C' && s4=='N')) {if (n[i].lop[0]!='E') cout<<n[i].ms<<" "<<n[i].ten<<" "<<n[i].lop<<" "<<n[i].mail<<endl;}
            else cout<<n[i].ms<<" "<<n[i].ten<<" "<<n[i].lop<<" "<<n[i].mail<<endl;
        
        }
    }
    }
    return 0;
}
// 4
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
// D15CQKT02-B
// sv4@stu.ptit.edu.vn
// 1
// Ke toan