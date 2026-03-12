#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) cnt1++;
        else cnt2++;
    }

    int ans=0,diff=0;
    if(cnt1>=cnt2){
        if(cnt2%2==1){
            ans++;
        }
        cout<<ans<<endl;
    }
    else {
        diff=cnt2-cnt1;
        ans+=(diff+1)/2;
        cnt2=cnt2-ans;
        if(cnt2%2==1){
            ans++;
        }
        cout<<ans<<endl;
    }


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }



}

