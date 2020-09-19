#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#define PI 2*acos(0.0)
//得到pi值-->2*acos(0.0)=3.14159265 rad
//弧度係2π，所以2π rad=360°
using namespace std;

int main(void)
{
    double s,a;
    char unit[4];

    while(cin>>s>>a>>unit){
        double arc,chord;
        if(strcmp(unit,"min")==0)//完整的周角为360度，1度等於60分，1分等於60 秒
            a/=60;
        if(a>180)
            a=360-a;
        arc=2*PI*(s+6440)*a/360.0;
        //扇形的弧长=2πr×角度/360//要記住要除360.0
        chord=(s+6440)*sin(a*PI/360)*2;
        //弧度係2π，所以2π rad=360°(這裡的PI是弧度)
        //這裡的sin(a*PI/360)就是sin(a*PI/180/2)
        cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
    }

    return 0;
}
