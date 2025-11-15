#include<bits/stdc++.h>
using namespace std;
vector<double>v={1, -15, 85, -225, 274, -120};

double fuc1(vector<double>&c,double x){
    double ans=0;
    for(int i=0;i<c.size();i++){
        ans=ans*x+c[i];
    }
    return ans;
}

double fuc2(vector<double>&c,double x){
    double ans=0;
    int n=c.size()-1;
    for(int i=0;i<n;i++){
        ans=ans*x+(n-i)*c[i];
    }
    return ans;
}

void sdiv(vector<double>&c,double root){
    int n=c.size();
    vector<double>b(n);
    b[0]=c[0];
    for(int i=1;i<n;i++){
        b[i]=c[i]+b[i-1]*root;
    }
    c.resize(n-1);
    for(int i=0;i<n-1;i++){
        c[i]=b[i];
    }
}

int main(){
    int d=5;
    double tol=0.00001;
    double x1;

    while(d>1){
        double x0=0;
        double error=100;

        while(error>=tol){
            double f1=fuc1(v,x0);
            double f2=fuc2(v,x0);
            x1=x0-(f1/f2);
            error=fabs(x1-x0);
            x0=x1;
        }

        cout<<x0<<endl;
        sdiv(v,x0);
        d=v.size()-1;
    }

    double lroot=-v[1]/v[0];
    cout<<lroot<<endl;
}
