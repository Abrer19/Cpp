#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n;
cin>>n;
bool pos=false;
for(int i=0;i<n-1;i++){
    if(pos) cout<<3<<" ";
    else cout<<-1<<" ";
    pos=!pos;
}
if(pos) cout<<2<<endl;
else cout<<-1<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}



}
