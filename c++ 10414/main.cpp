#include <iostream>
#define kuti 10000000
#define lakh 100000
#define hajar 1000
#define shata 100
using namespace std;

/* a wonderful solution */
void output(long long int input)
{
    if(input/kuti){
        output(input/kuti);
        cout<<" "<<"kuti";
        input%=kuti;
    }
    if(input/lakh){
        output(input/lakh);
        cout<<" "<<"lakh";
        input%=lakh;
    }
    if(input/hajar){
        output(input/hajar);
        cout<<" "<<"hajar";
        input%=hajar;
    }
    if(input/shata){
        output(input/shata);
        cout<<" "<<"shata";
        input%=shata;
    }
    if(input){
        cout<<" "<<input;
    }
}

int main(void)
{
    long long int input;
    int k=1;
    while(cin>>input){
        cout<<k<<".";
        output(input);
        k++;
        cout<<endl;
    }
    return 0;
}
