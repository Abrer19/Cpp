#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
string s1,s2;
cin>>s1>>s2;
char temp=' ';
temp=s2[0];
s2[0]=s1[0];
s1[0]=temp;

cout<<s1<<" "<<s2<<endl;


}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}

}
