#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}

int main(void)
{
    int m,n,t;

    while(cin>>m>>n>>t){
        if(m>t&&n>t) {cout<<"0 "<<t<<endl;continue;}
        int x,y,rx,ry,max=0,max2=0,min=t;
        if(m>n){
            int tmp=m;
            m=n;n=tmp;
        }
        int limit=t/m;
        for(x=0;x<=limit;x++){
            if(t-(x*m)<0) break;
            y=(t-(x*m))/n;
            if(x*m+y*n==t){
                if((x+y)>max){
                   max=x+y;
                }
            }else if(x*m+y*n<t){
                int tmin=t-(x*m+y*n);
                if(tmin<=min){
                    min=tmin;
                    if(x+y>max){
                        max2=x+y;
                        rx=x;ry=y;
                    }
                }
            }
        }
        if(max!=0) cout<<max<<endl;
        else
           cout<<max2<<" "<<t-(rx*m+ry*n)<<endl;
    }

    return 0;
}
