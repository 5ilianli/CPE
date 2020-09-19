#include<iostream>
#include<iomanip>
#include<cmath>
#define PI 2.0*acos(0.0)
using namespace std;

int main(void)
{
    double a;

    while(cin>>a){
        double x,y,z;
        z=a*a-PI*a*a/4-(PI*a*a)/12+(PI*a*a/6-sqrt(3)*a*a/4);
        y=a*a-PI*a*a/4-z*2;
        x=a*a-4*z-4*y;
        cout<<fixed<<setprecision(3)<<x<<" "<<4*y<<" "<<4*z<<endl;
    }

    return 0;
}
