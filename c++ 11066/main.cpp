#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(void)
{
    int num,Case=1;
    cin>>num;

    while(Case<=num){
        long long int a;
        cin>>a;
        if(a==0){
           cout<<"Case #"<<Case<<": 0\n";
        }else {
           int b[60]={0};
           int tmp;
           tmp=abs(a);
           int i;
           for(i=0;tmp;i++){
               b[i]=tmp%2;
               tmp/=2;
           }
           int check;
           if(a>0)
            check=0;
           else
            check=1;
           int j=0,carry=0;
           while(j<i){
            int tmp=carry;
            carry=(b[j]+tmp)/2;
            b[j]=(b[j]+tmp)%2;
            if(j%2!=check&&b[j])
                carry++;
            j++;
           }
           if(carry){
              if(j%2!=check){
                b[i++]=1;
                b[i++]=1;
              }else
                b[i++]=1;
           }
           cout<<"Case #"<<Case<<": ";
           for(int k=i-1;k>=0;k--)
            cout<<b[k];
           cout<<endl;
        }
        Case++;
    }

    return 0;
}
