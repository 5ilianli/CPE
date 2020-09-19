#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 2*acos(0.0)
using namespace std;

int main(void)
{
    int num;

    cin>>num;


    double a[num][2];
    for(int i=0;i<num;i++)
        for(int j=0;j<2;j++)
            a[i][j]=0;
    for(int i=0;i<num;i++)
        for(int j=0;j<2;j++)
            cin>>a[i][j];
    for(int i=0;i<num;i++)
        cout<<fixed<<setprecision(3)<<PI*((a[i][1]+a[i][0])/2-a[i][0]/2)*sqrt((a[i][1]/2)*(a[i][1]/2)-(a[i][0]/2)*(a[i][0]/2))<<endl;



    return 0;
}
