#include<bits/stdc++.h>
using namespace std;
float f(float x){
return 2*x*x*x-7*x*x+4*x+1;
}
float df(float x){
return 6*x*x-14*x+4;
}
int main(){
float h=3.5;
float error=1;
float tolerence=0.000001;
float hi=0;

while(error>tolerence){

   hi=h-(f(h)/df(h));

   error=fabs(hi-h);
   h=hi;
}

cout<<hi<<endl;
}
