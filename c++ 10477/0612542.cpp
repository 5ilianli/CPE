#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int numCase,i=1,numR;

    cin>>numCase;
    while(i<=numCase)
    {
        cin>>numR;

        int a[numR][4];

        for(int i=0;i<numR;i++)
            for(int j=0;j<4;j++)
              a[i][j]=0;
        for(int i=0;i<numR;i++)
            for(int j=0;j<4;j++)
              cin>>a[i][j];
        int x1,y1,x2,y2,j=1;
        x1=a[0][0];
        y1=a[0][1];
        x2=a[0][2];
        y2=a[0][3];
        while(j<numR)
        {
            if(x1<a[j][0])
               x1=a[j][0];
            if(y1<a[j][1])
               y1=a[j][1];
            if(x2>a[j][2])
               x2=a[j][2];
            if(y2>a[j][3])
               y2=a[j][3];
            j++;
        }

        if((x1>x2)||(y1>y2))
            cout<<"Case "<<i<<": 0"<<endl;
        else
            cout<<"Case "<<i<<": "<<abs(x1-x2)*abs(y1-y2)<<endl;
        i++;
        }

    return 0;
}
