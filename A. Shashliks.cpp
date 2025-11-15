#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll t;
cin>>t;
while(t--){
ll k,a,b,x,y;
cin>>k>>a>>b>>x>>y;
ll cnt1=0;
if(a<b && x<y){
    while(k>=a){
        k-=x;
        cnt1++;
    }
cout<<cnt1<<endl;
}
else{
   ll p=min(a,b);
ll q=max(a,b);
ll r=min(x,y);
ll s=max(x,y);
ll cnt=0;
while(k>=q){
    k-=r;
    cnt++;
}
while(k>=p){
    k-=s;
    cnt++;
}

cout<<cnt<<endl;



}

}


}
