#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
bool flag=true;
vector<ll>v;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    int cnt=0;
    for(int j=0;j<n;j++){
        if(s[j]=='1') cnt++;
    }
    if(cnt!=0) v.push_back(cnt);
}
for(int i=1;i<v.size();i++){
    if(v[i]!=v[i-1]){
        flag=false;
        break;
    }
}
if(!flag) cout<<"TRIANGLE"<<endl;
else cout<<"SQUARE"<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}


}


