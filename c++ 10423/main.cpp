#include <iostream>
#include <cmath>
#include <iomanip>
#define MIN(X,Y) (X>Y?Y:X)
using namespace std;

int main(void)
{
    double L,W;
    double MaxX,MinX;

    while(cin>>L>>W){
        MaxX=((L+W)-sqrt(L*L-L*W+W*W))/6.0;
        MinX=MIN(L,W)*0.5;
        cout<<fixed<<setprecision(3)<<MaxX+(1E-6)<<" "<<0.0<<" "<<MinX+(1E-6)<<endl;
    }


    return 0;
}
