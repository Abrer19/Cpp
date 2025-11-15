#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll r,g,b,w;
cin>>r>>g>>b>>w;

bool flag1=false;
bool flag2=false;


if((r%2)+(g%2)+(b%2)+(w%2)<=1){
    flag1=true;
}

if(r && g && b && ((r+1)%2+(g+1)%2+(b+1)%2+(w+1)%2<=1))  flag2=true;


if(flag1 || flag2){
    cout<<"YES"<<endl;
}
else    cout<<"NO"<<endl;
}

int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
