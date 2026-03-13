#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sumOfOdd(ll n){
ll k=(n+1)/2;
return k*k;
}
int main(){
ll t;
cin>>t;
for(ll x=1;x<=t;x++){
ll l,r;
cin>>l>>r;
ll result=sumOfOdd(r)-sumOfOdd(l-1);
cout<<"Case "<<x<<": "<<result<<"\n";
}
return 0;
}
