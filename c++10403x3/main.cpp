#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;

    while(n--){
        int a,atmp;
        cin>>a;
        atmp=a;

        int b1=0,b2=0;
        while(a){
            if(a%2==1) b1++;
            a/=2;
        }
        while(atmp){
            int c=atmp%10;
            while(c){
              if(c%2==1) b2++;
              c/=2;
            }
            atmp/=10;
        }
        cout<<b1<<" "<<b2<<endl;
    }

    return 0;
}
