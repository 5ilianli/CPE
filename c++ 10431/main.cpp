#include<iostream>
#include<cstdio>
using namespace std;
int a[1000000];

int derivative(int x,int max)
{
    long long int sum=0,exp=1;
    int i;
    for(i=max-1;i>=0;i--){
        sum+=a[i]*exp*(max-i);
        exp*=x;
    }
    return sum;
}

int main(void)
{
    int x,i;

    while(cin>>x){
        for(i=0;;i++){
            cin>>a[i];
            if(getchar()=='\n') /* since each time input a digit
                                   and then input a space or '\n' */
                break;
        }
        cout<<derivative(x,i)<<endl;
    }


    return 0;
}
