#include<iostream>
#include<cmath> //use abs(double) return double
#include<cstdlib> //use abs(int) return int
using namespace std;

int main(void)
{
    int num,night=1;
    cin>>num;

    while(night<=num){
        int a[4]={0},b[4]={0};
        for(int i=0;i<4;i++)
            cin>>a[i];
        for(int i=0;i<4;i++)
            cin>>b[i];
        int x1,y1,x2,y2;
        int weak,strong,undefended;
        int inner=0,outer=0;
        if(a[2]<b[0]||b[2]<a[0]||a[1]>b[3]||a[3]<b[1])
            strong=0;
        else{
            if(a[0]<b[0]){
                x1=b[0];
                inner++;
            }else{
                x1=a[0];
                outer++;
            }
            if(a[2]<b[2]){
                x2=a[2];
                outer++;
            }else{
                x2=b[2];
                inner++;
            }
            if(a[1]<b[1]){
                y1=b[1];
                inner++;
            }else{
                y1=a[1];
                outer++;
            }
            if(a[3]<b[3]){
                y2=a[3];
                outer++;
            }else{
                y2=b[3];
                inner++;
            }
            strong=abs(x1-x2)*abs(y1-y2);
        }
        if(inner==4)
            weak=abs(a[0]-a[2])*abs(a[1]-a[3])-strong;
        else if(outer==4)
            weak=abs(b[0]-b[2])*abs(b[1]-b[3])-strong;
        else
            weak=abs(a[0]-a[2])*abs(a[1]-a[3])+abs(b[0]-b[2])*abs(b[1]-b[3])-strong*2;
        if(inner==4)
            undefended=10000-abs(a[0]-a[2])*abs(a[1]-a[3]);
        else if(outer==4)
            undefended=10000-abs(b[0]-b[2])*abs(b[1]-b[3]);
        else
            undefended=10000-weak-strong;
        cout<<"Night "<<night<<": "<<strong<<" "<<weak<<" "<<undefended<<endl;
        night++;
    }

    return 0;
}
