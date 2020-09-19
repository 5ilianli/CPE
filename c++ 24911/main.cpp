#include<iostream>
#include<string.h>
#include<string>/* to use strlen() */
using namespace std;

int main(void)
{
    int num,direction,i=0,move=0;
    cin>>num;

    while(i<num)
    {
        cin>>direction;

        move=0;
        int j=0;
        char d[direction][12];/* record the number of directions */
        int dd[direction];/* record the move of (i-1)th direction*/

        for(int i=0;i<direction;i++)
            dd[i]=0;
        cin.get();
        while(j<direction){
            cin.getline(d[j],12);/* use cin.getline(a sentence,can involve the most number of characters) */
            j++;
        }

        j=0;
        while(j<direction){
         if(d[j][0]=='L'){/* to recognize the first character */
            dd[j]--;
            move--;
        }else if(d[j][0]=='R'){/* to recognize the first character */
            dd[j]++;
            move++;
        }else{
            int t;
            int x=strlen(d[j]);
            switch(x){
            case 9:{t=d[j][8]-'0'-1;/* since a sentence: SAME AS 2 => have 9 bis,
                                       it's 8th index in a sentence 1-D array,
                                       use -'0' to change char to int,
                                       use -1 to change number to index */
                    dd[j]=dd[t];
                    move=move+dd[j];
                    break;}
            case 10:{t=(d[j][8]-'0')*10+(d[j][9]-'0')-1;
                    dd[j]=dd[t];
                    move=move+dd[j];
                    break;}
            case 11:{dd[j]=dd[99];
                    move=move+dd[j];
                    break;}
                    }
            }
            j++;
        }
        cout<<move<<endl;
        i++;
    }
    return 0;
}
