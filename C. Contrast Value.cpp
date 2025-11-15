#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
vector<ll>v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}

if(v.size()==1){
    cout<<1<<endl;
    return;
}

vector<int>ans;
ans.push_back(v[0]);
ans.push_back(v[1]);

for(int i=2;i<n;i++){
    int size=ans.size();

    int x=ans[size-2]-ans[size-1];
    int y=ans[size-1]-v[i];

    if(x>0){
        if(y>0){
            ans[size-1]=v[i];
        }
        else if(y<0){
            ans.push_back(v[i]);
        }
    }
    else{
        if(y<0){
            ans[size-1]=v[i];
        }
        else if(y>0){
            ans.push_back(v[i]);
        }
    }


}
int result=ans.size();
if(ans[0]==ans[1]) result--;
cout<<result<<endl;

}
int main(){

ll t;
cin>>t;
while(t--){
    solve();
}

}
