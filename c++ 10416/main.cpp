#include<iostream>
#include<cstring>
using namespace std;

char bigN[101];
int table[200];

int NPowerOfN(int n){
    int nn=1;
    for(int i=1;i<=n;i++){
        nn=nn*n;
        nn%=10;
    }
    return nn;
}

int sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=NPowerOfN(i);
        sum%=10;
    }
    return sum;
}

/*
void tryRule(int firstN){
     for(int n=1;n<=firstN;n++)
        cout<<"first n terms: "<<n
            <<" NPowerOfN: "<<NPowerOfN(n)
            <<" sum: "<<sumN(n)<<endl;
}
*/

int main(void)
{
    //tryRule(100);
    //tryRule(200);

    for(int i=1;i<=100;i++)
        table[i%100]=sumN(i);

    while( cin>>bigN && strcmp(bigN,"0") ){
        int len=strlen(bigN);
        int n=bigN[len-1]-'0';
        if(len>1)
            n+=(bigN[len-2]-'0')*10;
        cout<<table[n]<<endl;
    }

    return 0;
}


/* old idea:
#include <iostream>
using namespace std;

void constructCycle(int a[][4]); / find the circulation of digit^n /

int main(void)
{
    int cycle[10][4]={0}; / 0,1,5,6 => only 0,1,5,6 ; 4 => only 4,6;
                            9 => only 9,1; 2 => 2,4,6,8;
                            3 => 3,9,7,1; 7 => 7,4,8,6; 8 => 8,4,2,6 /
    constructCycle(cycle);

    int a;

    while(cin>>a)
    {
        int sum=0,digit4=0,digit9=0,digit2=0,digit3=0,digit7=0,digit8=0;
        if(a==0)
            break;
        for(int i=1;i<a+1;i++)
        {
            switch(i%10){
               case 0:{sum+=0;break;}
               case 1:{sum+=1;break;}
               case 2:{digit2=i%4;sum+=cycle[2][digit2];break;}
               case 3:{digit3=i%4;sum+=cycle[3][digit3];break;}
               case 4:{digit4=i%4;sum+=cycle[4][digit4];break;}
               case 5:{sum+=5;break;}
               case 6:{sum+=6;break;}
               case 7:{digit7=i%4;sum+=cycle[7][digit7];break;}
               case 8:{digit8=i%4;sum+=cycle[8][digit8];break;}
               case 9:{digit9=i%4;sum+=cycle[9][digit9];break;}
            }
        }
        cout<<sum%10<<endl;
    }

    return 0;
}

void constructCycle(int a[][4])
{
    for(int i=0;i<10;i++){
        int x=i;
        int digit=x%10;
        a[i][0]=digit;
        for(int j=1;j<4;j++){
            digit=(digit*x)%10;
            a[i][j]=digit;
        }
    }
    for(int i=0;i<10;i++){
        int temp=a[i][3];
        a[i][3]=a[i][2];
        a[i][2]=a[i][1];
        a[i][1]=a[i][0];
        a[i][0]=temp;
    }
}
*/
