#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin>>num;

    while(num>0){
        int length;
        int temp=0;
        int swaps=0;
        cin>>length;
        int a[length];
        for(int i=0;i<length;i++)
            a[i]=0;
        for(int i=0;i<length;i++)
            cin>>a[i];
        for(int i=0;i<length;i++)
            for(int j=i+1;j<length;j++)
              if(a[i]>a[j]){
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
                 swaps++;
              }
        cout<<"Optimal train swapping takes "<<swaps<<" swaps.\n";
        num--;
    }

    return 0;
}
