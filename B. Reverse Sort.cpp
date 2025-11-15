#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, i, j, k, zeros, total_ones;
    string a;


    cin>>t;

    for(;t--;)
    {
        cin>>n;
        bool v[n+1];

        cin>>a;
        zeros=total_ones=0;

        for(i=0; i<n; i++)
        {
            v[i]=false;
        }


        for(i=0; i<n; i++)
        {
            if(a[i]=='1'){
                total_ones++;
            }
        }

        for(i=n-1; i>=n-total_ones; i--){
            if(a[i]=='0'){
                zeros++;
            }
        }

        if(zeros==0){
            cout<<"0\n";
        }else{
            cout<<"1\n";
            cout<<2*zeros<<" ";
            for(i=0; i<n; i++)
            {
                if(i<n-total_ones && a[i]=='1'){
                    cout<<i+1<<" ";
                }else if(i>=n-total_ones && a[i]=='0'){
                    cout<<i+1<<" ";
                }
            }
            cout<<"\n";

        }
    }

}
