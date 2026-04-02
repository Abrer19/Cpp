#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
int intial_one=0;
for(int i=0;i<n;i++){
    if(s[i]=='1') intial_one++;
}

if(intial_one==0){
    if(n<=3){
        cout<<1<<endl;

    }
    else {
        cout<<2+(n-4)/3<<endl;
    }

    return;
}
int zero=0,ans=0;
bool hasone=false;
for(int i=0;i<n;i++){
    if(s[i]=='0'){
        zero++;
    }
    else {
        if(hasone){
            ans+=(zero)/3;
        }
        else {
            ans+=(zero+1)/3;
        }
        hasone=true;
        zero=0;
    }
}

ans+=(zero+1)/3;

cout<<ans+intial_one<<endl;


}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}



}
