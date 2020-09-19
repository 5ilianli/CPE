#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
    int num;
    cin>>num;

    while(num--){
        int people;
        int sum=0;
        cin>>people;
        int a[people];
        for(int i=0;i<people;i++)
            a[i]=0;
        for(int i=0;i<people;i++){
            cin>>a[i];
            sum+=a[i];
        }
        double average=(double)sum/(double)people;
        int pass=0;
        for(int i=0;i<people;i++){
            if(a[i]>average)
                pass++;
        }
        cout<<fixed<<setprecision(3)<<((double)pass/(double)people)*100.0<<"%\n";
    }

    return 0;
}
