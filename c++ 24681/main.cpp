#include<iostream>
#include<iomanip> /* to use setw() */
#include<cmath> /* to use sqrt() */
using namespace std;

int main(void)
{
    int inputList[100]={0},a,i=0;

    while(cin>>a){
        if(a==0)
            break;
        inputList[i++]=a;
    }

    cout<<"PERFECTION OUTPUT\n";

    for(int j=0;j<i;j++)
    {
        int value,limit,sum=1; /* since sum of every digit must contain 1,
                                  and we can directly conduct sum+=(k+value/k); */
        value=inputList[j];
        limit=sqrt(value);
        if(limit*limit<value){
            for(int k=2;k<=limit;k++)
              if(value%k==0)
                sum+=(k+value/k);
        }else if(limit*limit==value){
            if(value==1)
                sum=0;
            else{
                for(int k=2;k<limit;k++)
                  if(value%k==0)
                    sum+=(k+value/k);
            }
        }
         /* due to limit, we add factor, ex.6=2*3 => 2+3 ,
                                 so we only have to check the digit from 2 to limit */
        if(sum==value)
           cout<<setw(5)<<value<<"  "<<"PERFECT\n";
        else if(sum>value)
           cout<<setw(5)<<value<<"  "<<"ABUNDANT\n";
        else
           cout<<setw(5)<<value<<"  "<<"DEFICIENT\n";
    }

    cout<<"END OF OUTPUT\n";/* sometimes, PE occurs on the last line without '\n' */

    return 0;
}
