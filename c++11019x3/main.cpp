#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    int N;
    char str[6];

    while(cin>>N,N){
        int top=1,n=2,w=3,s=5,e=4;
        while(N--){
            cin>>str;
            switch(str[0]){
              case 'n':{n=top;top=s;s=7-n;break;}
              case 's':{s=top;top=n;n=7-s;break;}
              case 'w':{w=top;top=e;e=7-w;break;}
              case 'e':{e=top;top=w;w=7-e;break;}
            }
        }
        cout<<top<<endl;
    }

    return 0;
}
