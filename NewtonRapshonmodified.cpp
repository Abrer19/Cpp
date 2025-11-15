#include<bits/stdc++.h>
using namespace std;
vector<double>v = {1,-15,85,-225,274,-120};

double func1(double x,const vector<double>&c)
{
    double ans = 0;
    for(int i=0;i<c.size();i++)
        ans = ans*x + c[i];
    return ans;
}

double func2(double x,const vector<double>& c)
{
    double ans= 0;
    int n = c.size()-1;
   for (int i = 0; i < n; i++)
        ans = ans*x + (n-i) * c[i];
    return ans;
}


void s_div(vector<double>&c, double root)
{
    int n = c.size();
    vector<double> b(n);
    b[0] = c[0];
    for (int i = 1; i < n; i++)
        b[i] = c[i] + b[i - 1] * root;
    c.resize(n - 1);
    for (int i = 0; i < n - 1; i++)
        c[i] = b[i];
}


int main()
{
    int dg = 5,n=5,as = 1;
    double x0 = -1,tol = 0.00001;
    int iter = 0;

    while (n>1)
    {
        iter = 0;
        double error = 100;
        cout<<"Converging for Root: "<<as++<<": "<<endl;
        cout<<"Iter\t  x0\t\t  x1\t\t  error\t"<<endl;
        while (error >= tol)
        {
            iter++;
            double f1 = func1(x0,v);
            double f2 = func2(x0,v);

            double x1 = x0 - f1/f2;
            error = abs(x1 - x0);

            cout<<fixed<<setprecision(6)<<iter<<"\t"<<x0<<"\t"<<x1<<"\t"<<error<<endl;
            x0 = x1;
        }
        cout<<endl<<"Root: "<<fixed<<setprecision(6)<<x0<<endl;

        s_div(v, x0);
        n = v.size() - 1;
    }

    double l_root = -v[1]/v[0];
    cout <<"Final root: " << fixed << setprecision(6) << l_root << endl;
}
