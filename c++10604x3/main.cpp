#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int n;

    while(cin>>n,n){
        int a[n][2];
        double sumL=0,sumR=0;
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1];
            sumL+=a[i][0];
            sumR+=a[i][1];
        }
        double R,distance=0,max=0;
        cin>>R;
        sumL/=3;sumR/=3;
        for(int i=0;i<n;i++){
            distance=abs(sumL-a[i][0])*abs(sumL-a[i][0])+abs(sumR-a[i][1])*abs(sumR-a[i][1]);
            if(distance>max)
                max=distance;
        }
        max=sqrt(max);
        if(max>R) cout<<"There is no way of packing that polygon.\n";
        else cout<<"The polygon can be packed in the circle.\n";

    }
    return 0;
}
