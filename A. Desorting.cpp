#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bool flag=true;
    int mini=1e9;
    for(int i=1; i<n; i++)
    {
        if(a[i]<a[i-1])
        {
            flag=false;
            break;
        }
        mini=min(mini,a[i]-a[i-1]);
    }

    if(!flag) cout<<0<<endl;

    else
    {
        cout<<(mini/2)+1<<endl;
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
