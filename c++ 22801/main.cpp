#include<iostream>
using namespace std;

int main(void)
{
    int num;
    char *week[]={"Sunday","Monday","Tuesday","Wednesday","Thursday",
                  "Friday","Saturday"}; /* important!!!
                                           when index=0, week[0]="Sunday" */
    int month_days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    /* don't bewitched by the description of problem (ex. doomsday);
       use the best way to solve it! */
    cin>>num;

    while(num--)
    {
        int month,day;
        cin>>month>>day;
        int w=5;/* since 2010/1/1 occurs on Friday */
        for(int i=1;i<month;i++)
            w+=month_days[i-1];
        w=(w+day)%7;
        cout<<week[w]<<endl;
    }

    return 0;
}

/* odd idea:
int f4(int a,int b);
int f6(int a,int b);
int f8(int a,int b);
int f10(int a,int b);
int f12(int a,int b);

int main(void)
{
    int a,b,c,i=0,num;
    char *week[]={"Monday","Tuesday","Wednesday","Thursday",
                  "Friday","Saturday","Sunday"};

    cin>>num;

    int date[num][2];

    for(int i=0;i<num;i++)
        for(int j=0;j<2;j++)
          date[i][j]=0;

    i=0;
    while(i<num)
    {
        cin>>date[i][0]>>date[i][1];
        i++;
    }

    int j=i;
    i=0;
    while(i<j)
    {
        a=date[i][0];
        b=date[i][1];
        if(a<4)
           c=f4(a,b);
        else if(a<6)
           c=f6(a,b);
        else if(a<8)
           c=f8(a,b);
        else if(a<10)
           c=f10(a,b);
        else
           c=f12(a,b);

        cout<<week[c-1]<<endl;

        i++;
    }

    return 0;
}

int f4(int a,int b)
{
    int x;

    switch(a)
    {
       case 1:{x=(b+5)%7;break;}
       case 2:{x=(31+b+5)%7;break;}
       case 3:{x=(31+28+b+5)%7;break;}
    }
    return x;
}

int f6(int a,int b)
{
    int x;

    switch(a)
    {
       case 4:{if(b<4)
                 x=(b+4)%7;
               else
                 x=(b-3)%7;
               break;}
       case 5:{x=(27+b)%7;break;}
    }
    return x;
}
int f8(int a,int b)
{
    int x;

    switch(a)
    {
       case 6:{if(b<6)
                 x=(b+6)%7;
               else
                 x=(b-5)%7;
               break;}
       case 7:{x=(25+b)%7;break;}
    }
    return x;
}
int f10(int a,int b)
{
    int x;

    switch(a)
    {
       case 8:{if(b<8)
                 x=b%7;
               else
                 x=(b-7)%7;break;}
       case 9:{x=(25+b)%7;break;}
       case 10:{x=(25+31+b)%7;break;}
    }
    return x;
}
int f12(int a,int b)
{
    int x;

    switch(a)
    {
       case 10:{if(b<10)
                  x=b%7;
                else
                  x=(b-9)%7;
                break;}
       case 11:{x=(22+b)%7;break;}
       case 12:{if(b<12)
                  x=(b+3)%7;
                else
                  x=(b-11)%7;
                break;
               }
    }

    return x;
}
*/
