#include <iostream>
using namespace std;

long int binary(int a[],long int b);

int main(void)
{
    int num,i=0,x;
    long int bit1,bit2,hex;

    cin>>num;

    while(i<num)
    {
        int a[14]={0};
        int b[30]={0};
        hex=0;

        cin>>x;

        bit1=binary(a,x);

        while(x!=0){
            hex=(hex+x%10)*16;
            x/=10;
        }
        bit2=binary(b,hex);
        i++;
        int x=0,y=0;
        while(bit1>=0)
           x+=a[bit1--];
        while(bit2>=0)
           y+=b[bit2--];
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}

long int binary(int a[],long int b)
{
    long int i=0;
    while(b!=0)
    {
        a[i++]=b%2;
        b/=2;
    }
    return (i-1);
}
