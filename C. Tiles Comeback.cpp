#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n,k;
cin>>n>>k;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

vector<int>suff(n,0);
suff[n-1]=1;

for(int i=n-2;i>=0;i--){
    suff[i]=suff[i+1]+(arr[i]==arr[n-1]);
}


if(arr[0]==arr[n-1]){
    if(suff[0]%k==0 || suff[0]>=k){
        cout<<"YES"<<endl;
        return;
    }
}

bool flag=false;
int cnt=0;
for(int i=0;i<n-1;i++){
    cnt+=(arr[i]==arr[0]);
    if(cnt%k==0 && suff[i+1]>=k){
        flag=true;
        break;
    }
}

if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}


}
