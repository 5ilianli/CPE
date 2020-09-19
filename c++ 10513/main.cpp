#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin>>num;

    while(num--){
        long long int a,b=0;
        cin>>a;

        int check=1,times=0;
        while(check){
            long long int x=a;
            b=0;
            while(x){
               b=b*10+x%10;
               x/=10;
            }
            long long int d=a+b,y=0;
            x=d;
            while(x){
               y=y*10+x%10;
               x/=10;
            }
            times++;
            a=d;
            if(y==d){
                check=0;
                break;
            }
            if(times>1000)
                check=0;
            if(y<0)
                check=0;
        }
        cout<<times<<" "<<a<<endl;
    }
    return 0;
}
