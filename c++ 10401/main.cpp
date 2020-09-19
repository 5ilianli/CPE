#include <iostream>
#define SIZE 43 /*fib_base have 9 digits on 43th fib number
                  =>1,2,3,5,......,701408733*/
using namespace std;

void fibs(int a[],int size);
int index(int a,int b[]);

int main(void)
{
    int fib[SIZE]={0};

    fibs(fib,SIZE);

    int num,i=0,fib_base;/*32-bit int -2147483648~2127483647(10 digits)*/

    cin>>num;

    int decimal[num];

    for(int j=0;j<num;j++) /* input all value once */
        cin>>decimal[j];

    while(i<num){
        cout<<decimal[i]<<" = ";
        fib_base=decimal[i];
        int j;
        j=index(decimal[i],fib);
        while(j>=0){
            if(fib_base==0)
               cout<<"0";
            else{
                cout<<fib_base/fib[j];
                fib_base%=fib[j];
            }
            j--;
        }
        cout<<" (fib)\n";
        i++;
    }

    return 0;
}

void fibs(int a[],int size)
{
    int f1=1,f2=2,i=2;

    a[0]=f1;
    a[1]=f2;

    while(i<size){
        a[i]=f2+f1;
        f1=f2;
        f2=a[i];
        i++;
    }
}

int index(int a,int b[])
{
    int j=0;
    while(a>=b[j])
        j++;
    return j-1;
}

/*original ideal:
int index(int a)
{
    int j;
        if(a>9)
            j=a-6-a%10;/*fib number, for each 5 numbers,adds a digits
                     ex.1 2 3 5 8 13 21 34 55 89 146...
                     1 2 3 5 8 => 1 digit
                     13 21 34 55 89 => 2 digits...
                     if we want to find (10)fib_base,
                     we only need fib_base<=10,
                     so we use (10-6-a%10)th index
        else
            switch(a){
                case 9:
                case 8:{j=4;break;}
                case 7:
                case 6:
                case 5:{j=3;break;}
                case 4:
                case 3:{j=2;break;}
                case 2:{j=1;break;}
                case 1:{j=0;break;}
           }
    return j;
}*/
