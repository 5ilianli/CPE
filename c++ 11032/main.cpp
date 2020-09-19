#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int num,Case=1;
    cin>>num;

    while(num--){
       long long int a;
       cin>>a;
       long long int c[20000]={0},d=a;
       int index=0;
       int check;
       while(1){
            long long int b=0,x=d;
            while(x){
              b+=(x%10)*(x%10);
              x/=10;
            }
            if(b==1){
                check=1;
                break;
            }
            x=b;
            if(x/10==0){
                check=0;
                break;
            }
            d=b;
            index++;
       }
       if(check)
          cout<<"Case #"<<Case<<": "<<a<<" is a Happy number.\n";
       else
          cout<<"Case #"<<Case<<": "<<a<<" is an Unhappy number.\n";
       Case++;

    }

    return 0;
}
