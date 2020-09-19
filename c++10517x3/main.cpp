#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;

    while(n--){
       int d,p;
       cin>>d;
       int day[d];
       cin>>p;
       int party[p];
       for(int i=0;i<p;i++)
            cin>>party[i];
       for(int i=0;i<d;i++)
            day[i]=0;
       for(int i=0;i<p;i++){
           int tmp=party[i];
           for(int j=tmp-1;j<d;j+=tmp){
               day[j]++;
           }
       }
       for(int i=5;i<d;i+=7){
           day[i]=0;
           day[i+1]=0;
       }
       int h=0;
       for(int i=0;i<d;i++)
          if(day[i]!=0)
             h++;
       cout<<h<<endl;
    }

    return 0;
}
