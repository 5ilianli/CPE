#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main(void)
{
    int n,Case=0;
    double PI 2*acos(0.0);
    cin>>n;
    getchar();
    char buf[101];
    while(Case<num){
            double a,b;
            gets(buf);
            if(sscanf(buf,"%lf%lf",&a,&b)==1){
                if(a>=0)
                    cout<<fixed<<setprecision(4)<<PI*a*a*0.125<<endl;
                else cout<<"Impossible.\n";
            }else{
                if(a>=0&&b>=0)
                    cout<<fixed<<setprecision(4)<<PI*2.0*a*b<<endl;
                else cout<<"Impossible.\n";
            }
            Case++;
        }


    return 0;
}
