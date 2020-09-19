#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(void)
{
    int sets,num,n,i;
    double p,pi;

    cin>>sets;

    for(num=0;num<sets;num++){
        cin>>n>>p>>i;
        if(p<0.00001)
            cout<<"0.0000\n";
        else{
            pi=pow(1-p,i-1)*p/(1-pow(1-p,n));
            cout<<fixed<<setprecision(4)<<pi<<endl;
        }
    }

    return 0;
}
