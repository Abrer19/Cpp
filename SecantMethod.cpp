#include<bits/stdc++.h>
using namespace std;
float f(float x){
return x*x-3*x+2;
}
int main(){
float x0=0;
float x1=2;
float x2;
float tolerence=0.0001;
float error=1;
float prev_x=x1;

while(error>tolerence){
    x2=x1-(((x1-x0)*f(x0))/(f(x1)-f(x0)));
    error=fabs(x2-prev_x);
    prev_x=x2;
    x0=x1;
    x1=x2;

}
cout<<"Final Root "<<x1<<endl;

}

