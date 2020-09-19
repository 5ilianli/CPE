#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main(void)
{
    char ch;
    char str[21];

    while(cin>>str){
        int store[strlen(str)];
        for(int i=0;i<strlen(str);i++)
            store[i]=0;

        for(int i=0;i<strlen(str);i++){
            switch(str[i]){
              case 'B':
              case 'F':
              case 'P':
              case 'V':{store[i]=1;break;}
              case 'C':
              case 'G':
              case 'J':
              case 'K':
              case 'Q':
              case 'S':
              case 'X':
              case 'Z':{store[i]=2;break;}
              case 'D':
              case 'T':{store[i]=3;break;}
              case 'L':{store[i]=4;break;}
              case 'M':
              case 'N':{store[i]=5;break;}
              case 'R':{store[i]=6;break;}
              default:{store[i]=0;break;}
            }
        }
        for(int i=0;i<strlen(str);i++){
            if(store[i]==0)
                ;
            else if(store[i]==store[i-1])
                ;
            else
                cout<<store[i];
        }
        cout<<endl;
    }

    return 0;
}
