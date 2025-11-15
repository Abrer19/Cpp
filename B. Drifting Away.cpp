#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
string s;
cin>>s;
int n=s.size();

int c1=0,c2=0,c3=0;

for(int i=0;i<n;i++){
    if(s[i]=='<'){
        c1++;
    }
    else if(s[i]=='*'){
        c2++;
    }
    else c3++;
}

string chk=string(c1,'<')+string(c2,'*')+string(c3,'>');

if(chk!=s || c2>1){
    cout<<-1<<endl;
}
else cout<<max(c1+c2,c2+c3)<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}


}
