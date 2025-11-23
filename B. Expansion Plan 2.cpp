#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,x,y;
cin>>n>>x>>y;
string s;
cin>>s;
ll dx=llabs(x),dy=llabs(y);
for(auto ch:s){
if(dx==0 && dy==0) break;
if(ch=='8'){
if(dx>0)  dx--;
if(dy>0)  dy--;
}
else {
if(dx>=dy){
if(dx>0) dx--;
}
else {
if(dy>0) dy--;
}

}



}
if(dx==0 && dy==0){
   cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();

}
}
