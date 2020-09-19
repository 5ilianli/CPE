#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main(void)
{
    char str[11];

    while(cin>>str){
        int sum=0;
        if(str[0]=='0'&&str[1]=='x'){
            for(int i=2;i<strlen(str);i++){
                switch(str[i]){
                  case 'A':
                  case 'B':
                  case 'C':
                  case 'D':
                  case 'E':
                  case 'F':{sum=sum*16+(str[i]-'A'+10);break;}
                  default:{sum=sum*16+(str[i]-'0');break;}
                }
            }
            cout<<sum<<endl;
        }else if(str[0]=='-'){
            break;
        }else{
           int strHex[20];
           int sumInt=0;
           for(int i=0;i<strlen(str);i++)
               sumInt=sumInt*10+(str[i]-'0');
           int index=0;
           cout<<"0x";
           if(sumInt==0)
              cout<<"0"<<endl;
           else{
              while(sumInt!=0){
               strHex[index]=sumInt%16;
               sumInt/=16;
               index++;
           }
           for(int i=index-1;i>=0;i--){
               switch(strHex[i]){
               case 10:
               case 11:
               case 12:
               case 13:
               case 14:
               case 15:{char ch=(strHex[i]-10)+'A';
                        printf("%c",ch);break;}
               default:{char ch=strHex[i]+'0';
                        printf("%c",ch);break;}
               }
           }
           cout<<endl;
           }
        }
    }

    return 0;
}
