#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
string s;
cin>>s;
ll cnt1=0,cnt2=0;
for(int i=0;i<n;i++){
    if(s[i]=='-') cnt1++;
    else cnt2++;
}
ll a=cnt1/2;
ll b=cnt1-a;
ll ans=a*b*cnt2;
cout<<ans<<endl;
}


}
