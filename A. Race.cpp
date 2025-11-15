#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t;
cin>>t;
while(t--){
int a,x,y;
cin>>a>>x>>y;
if(y>x) swap(x,y);
if(a<x && a>y){
    cout<<"NO"<<endl;
}
else {
    cout<<"YES"<<endl;
}

}


}
