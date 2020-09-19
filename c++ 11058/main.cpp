#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;

    while(cin>>n){
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int money;
        cin>>money;
        sort(a,a+n);

        int diff=1000001,x,y;
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                if(money==a[i]+a[j]&&abs(a[i]-a[j])<diff){
                   x=a[i];
                   y=a[j];
                   diff=abs(a[i]-a[j]);
                }
        cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<"."<<endl<<endl;
    }


    return 0;
}
