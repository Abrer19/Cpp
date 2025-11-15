#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll t;
cin>>t;
for(int i=1;i<=t;i++){
ll a,b;
cin>>a>>b;
ll ans=(abs(a-b)*4)+(a*4)+19;
cout<<"Case "<<i<<": "<< ans<<endl;
}

}

