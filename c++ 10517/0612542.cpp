#include <iostream>
using namespace std;

int main(void)
{
    int num,Test=1;

    cin>>num;

    while(Test<=num){
        int days;
        cin>>days;

        int parties;
        cin>>parties;
        int a[parties];
        for(int i=0;i<parties;i++)
            a[i]=0;
        for(int i=0;i<parties;i++)
            cin>>a[i];

        int check[days];
        for(int i=0;i<days;i++)
            check[i]=0;

        int partyHartals,index=0;
        while(index<parties){
            partyHartals=a[index];
            for(int i=partyHartals-1;i<days;i+=partyHartals)
                check[i]++;
            index++;
        }
        int dayHartal=0;
        for(int i=0;i<days;i++)
            if(i%7!=5&&i%7!=6)
                if(check[i]!=0)
                  dayHartal++;
        cout<<dayHartal<<endl;
        Test++;
    }

    return 0;
}
