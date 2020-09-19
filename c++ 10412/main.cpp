#include<iostream>
#include<stdio.h>/* to use getchar() */
using namespace std;
/* 2D-array in function must bind col number ex. original[][14] */
void shiftRight(const char original[][14],char convert[][14]);
char search(char convert[][14],const char original[][14],char ch);

int main(void)
{
    const char original[4][14]=
    {{'`','1','2','3','4','5','6','7','8','9','0','-','='},
     {'Q','W','E','R','T','Y','U','I','O','P','[',']','\\'},
     {'A','S','D','F','G','H','J','K','L',';','\''},
     {'Z','X','C','V','B','N','M',',','.','/'}};
     /* original keyboard;
        original row: 12,13,11,10;
        we use 14 col to store '\0' in last col;
        \ => '\\'; ' => '\'' ; */
    char convert[4][14];
    /* convert[][]:to store the key of shifting original keyboard
       to the right key ex. I=>O,A=>S,M=> , ,.....
       if we print: O S, => I AM */

    shiftRight(original,convert);

    char ch,convertCh;

    while((ch=getchar())!=EOF){ /* Important! getchar()!=EOF */
        if(ch!='\n'){
            if(ch=='`'||ch=='Q'||ch=='A'||ch=='Z'){
                switch(ch){ /* special key */
                 case '`':{convertCh='=';break;}
                 case 'Q':{convertCh='\\';break;}
                 case 'A':{convertCh='\'';break;}
                 case 'Z':{convertCh='/';break;}
                }
                cout<<convertCh;
            }else{
                convertCh=search(convert,original,ch);
                cout<<convertCh;
            }
        }else
            cout<<endl;
    }

    return 0;
}

void shiftRight(const char original[][14],char convert[][14])
{
    for(int i=0;i<4;i++)
    {
        int j=0;
        while(1){
            if(original[i][j]!='\0')
               convert[i][j+1]=original[i][j];
            else{
                convert[i][0]=original[i][j-1];
                break;
            }
            j++;
        }
    }
}

char search(char convert[][14],const char original[][14],char ch)
{
    int get=0,i,j;

    for(i=0;i<4;i++)
    {
        j=0;
        while(original[i][j]!='\0'){
            if(ch==original[i][j]){
                get++;
                break;
            }
            j++;
        }
        if(get)
          break;
    }

    if(i==4)
        return ch;/* It's the original character*/

    return convert[i][j];/* want to get shifted character only to get i & j */
}
