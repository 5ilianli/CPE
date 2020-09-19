#include <iostream>
using namespace std;

int main(void)
{
    int a,i,j,binary[31]={0};

    while(1)
    {
        cin>>a;
        if(a==0)
            break;
        i=0;
        j=0;
        while(a){
            if(a%2)
                j++;
            binary[i++]=a%2;
            a/=2;
        }
        cout<<"The parity of ";
        for(i--;i>=0;i--)
        {
            cout<<binary[i];
        }
        cout<<" is "<<j<<" (mod 2).\n";
    }

    return 0;
}
