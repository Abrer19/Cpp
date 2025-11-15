#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,m,k;
cin>>n>>m>>k;
ll op=0;
string s;
cin>>s;
ll l=0,r=0;
while(r<s.size()){
    if(s[r]=='0'){
    ll x=m-1,ok=0;
    while(x--){
         if(s[r]=='0'){
            r++;
      }
      else{
        r++;
        ok=1;
        break;
      }
    }
    if(!ok && s[r]=='0'){
         l=r+k;
         r=l;
         op++;
    }
}

else{
    r++;
}


}
cout<<op<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
 solve();
}




}
