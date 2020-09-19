#include <iostream>
using namespace std;

int main(void)
{
    long long int aa,bb;

    while(cin>>aa>>bb,aa||bb){//要看清楚,是輸入兩個0,才會結束,只有一個0時,還不能結束

        int a[11]={0};
        int b[11]={0};

        for(int i=0;i<11;i++){
           a[i]=aa%10;
           aa/=10;
           b[i]=bb%10;
           bb/=10;
        }

        int c=0;

        for(int i=0;i<11;i++)
          if(a[i]+b[i]>=10){
             if(i!=10)
               a[i+1]++;
             c++;
          }

        if(c==0)
           cout<<"No carry operation."<<endl;
        else if(c==1)
           cout<<c<<" carry operation."<<endl;
        else
           cout<<c<<" carry operations."<<endl;
    }

    return 0;
}
