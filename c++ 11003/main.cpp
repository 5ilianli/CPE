#include <iostream>
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
        int times=0;
        for(int i=0;i<n;i++)
          for(int j=i;j<n;j++)
            if(a[i]>a[j]){
              swap(a[i],a[j]);
              times++;
            }
        cout<<"Minimum exchange operations : "<<times<<endl;
    }

    return 0;
}
