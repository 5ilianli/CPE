#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
#define PI 2*acos(0.0)
using namespace std;

int main(void)
{
    double s,a;
    char unit[4];

    while(cin>>s>>a>>unit){
        double arc,chord;
        if(strcmp(unit,"min")==0)
            a/=60;
        if(a>180)
            a=360-a;
        arc=2*PI*(s+6440)*a/360.0;
        chord=(s+6440)*sin(a*PI/360)*2;
        cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
    }


    return 0;
}
