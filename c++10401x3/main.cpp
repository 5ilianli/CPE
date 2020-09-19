#include <iostream>
using namespace std;

int main(void)
{
    /*
    int f1=0,f2=1,f=0,i;

    for(i=1;f<=100000000;i++){
        f=f1+f2;
        f1=f;
        f2=f1;
    }
    */

    int ff[40]={1,2,0};

    for(int i=2;i<40;i++){
        ff[i]=ff[i-1]+ff[i-2];
        //cout<<ff[i]<<" ";
    }

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++){
        int d=a[i],tmp;
        for(int j=39;j>=0;j--)
        if(ff[j]<=a[i]){
            tmp=j;
            break;
        }
        cout<<d<<" = ";
        for(int j=tmp;j>=0;j--){

            cout<<(a[i]/ff[j]);
            a[i]%=ff[j];
        }
        cout<<" (fib)\n";
    }






    return 0;
}
