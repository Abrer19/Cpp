#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll t;
cin>>t;
map<string,int>mp;

while(t--){
string s;
cin>>s;
if(mp[s]==0) cout<<"OK"<<endl;
else {
    cout<<s<<mp[s]<<endl;
}

mp[s]++;

}



}
