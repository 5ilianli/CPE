#include<iostream>
#include<cstdio>
#include<ctype.h>
using namespace std;

char shift(const char keyOriginal[][14],char ch);

int main(void)
{
    const char keyOriginal[3][14]=
    {{'Q','W','E','R','T','Y','U','I','O','P','[',']','\\'},
     {'A','S','D','F','G','H','J','K','L',';','\''},
     {'Z','X','C','V','B','N','M',',','.','/'}};
    char ch;

    while((ch=getchar())!=EOF){
       if(isalpha(ch)){
          ch=toupper(ch);
          ch=shift(keyOriginal,ch);
       }else{
          switch(ch){
          case '\\':{ch='[';break;}
          case ']':{ch='P';break;}
          case '[':{ch='O';break;}
          case '\'':{ch='L';break;}
          case ';':{ch='K';break;}
          case '/':{ch=',';break;}
          case '.':{ch='M';break;}
          case ',':{ch='N';break;}
          }
       }
       if(isalpha(ch)){
            ch=tolower(ch);
            cout<<ch;
       }
       else
        cout<<ch;
    }


    return 0;
}

char shift(const char keyOriginal[][14],char ch)
{
    switch(ch){
          case'W':return'\\';
          case'Q':return']';
          case'S':return'\'';
          case'A':return';';
          case'X':return'/';
          case'Z':return'.';
          default:{
            for(int i=0;i<3;i++){
                int j=2;
                while(keyOriginal[i][j]!='\0'){
                   if(keyOriginal[i][j]==ch){
                      ch=keyOriginal[i][j-2];
                      return ch;
                   }
                   j++;
                }
            }
          }
    }
}
