#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n,m;
cin>>n>>m;
string a,b;
cin>>a;
cin>>b;

if(a.size()>b.size()){
    cout<<-1<<endl;
}

else {
     while(a.size() < b.size()){
            cnt++;
            a += a; // Append a to itself
        }

        // Fix substring check
        if(a.find(b) != string::npos){
            cout<<cnt<<endl;
        }
        else {
            // Try one more concatenation
            a += a;
            cnt++;
            if(a.find(b) != string::npos){
                cout<<cnt<<endl;
            }
            else {
                cout<<-1<<endl;
            }
}







}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}


}
