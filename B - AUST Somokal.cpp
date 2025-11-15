#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll n,m;
cin>>n>>m;
bool flag=true;
ll cnt=0;
for(int i=0;i<n;i++){
string s;
cin>>s;
cnt+=s.size();
if(cnt>m) {
flag=false;
}
else cnt=0;
}


if(!flag) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}

