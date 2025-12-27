#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());

    ll l=0,r=n-1;
    ll sum=0,ans=0;
    vector<ll> order;

    while(l<=r){
        ll before=sum/x;
        ll after=(sum+a[r])/x;

        if(after>before){
            sum+=a[r];
            ans+=a[r];
            order.push_back(a[r]);
            r--;
        }else{
            sum+=a[l];
            order.push_back(a[l]);
            l++;
        }
    }

    cout<<ans<<"\n";
    for(ll x:order) cout<<x<<" ";
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--) solve();
}
