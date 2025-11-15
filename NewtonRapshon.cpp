#include<bits/stdc++.h>
using namespace std;
float f(float x){
return x*x-3*x+2;
}
float d(float x){
return 2*x-3;
}
int main(){

float x=0;
float tolerence=0.0001;
float error=1;
float prev_x;

while(error>tolerence){
    prev_x=x;
    x=x-f(x)/d(x);
    error= fabs(x-prev_x);

}

cout<<"Final root "<<x<<endl;

}
