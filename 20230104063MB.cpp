#include<bits/stdc++.h>
using namespace std;
vector<int>coeff={1, -15, 85, -225, 274, -120};
double f(double x){
double result=0;
for(int i=0;i<coeff.size();i++){
    result=result*x+coeff[i];
}
return result;
}

int main(){
double a=-6,b=6,x0,x1,x2,error,tolerence=0.00001,prev_root,ds=0.1;

x1=a;
x2=x1+ds;

while(x2<=b){
    error=100;
    prev_root=x1;

    if(f(x1)*f(x2)<0){
        while(error>=tolerence){
            x0=(x1+x2)/2;
            error=fabs(x0-prev_root);
            if(f(x0)==0) break;
            else if(f(x0)*f(x1)<0) x2=x0;
            else x1=x0;
            prev_root=x0;
        }
        cout<<x0<<endl;
    }

    x1=x2;
    x2=x1+ds;
}

return 0;

}
