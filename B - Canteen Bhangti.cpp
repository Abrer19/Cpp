#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int cnt1=0,cnt5=0,cnt10=0,cnt50=0,cnt100=0,cnt500=0;
while(n>=500){
   cnt500++;
   n=n-500;
}
while(n>=100){
  cnt100++;
  n=n-100;
}
while(n>=50){
  cnt50++;
  n=n-50;
}
while(n>=10){
  cnt10++;
  n=n-10;
}
while(n>=5){
  cnt5++;
  n=n-5;
}
while(n>=1){
  cnt1++;
  n=n-1;
}


if(cnt1>0) {
    for(int i=0;i<cnt1;i++){
        cout<<1<<" ";
    }
}
if(cnt5>0) {
    for(int i=0;i<cnt5;i++){
        cout<<5<<" ";
    }
}
if(cnt10>0) {
    for(int i=0;i<cnt10;i++){
        cout<<10<<" ";
    }
}
if(cnt50>0) {
    for(int i=0;i<cnt50;i++){
        cout<<50<<" ";
    }
}

if(cnt100>0) {
    for(int i=0;i<cnt100;i++){
        cout<<100<<" ";
    }
}

if(cnt500>0) {
    for(int i=0;i<cnt500;i++){
        cout<<500<<" ";
    }
}
}


