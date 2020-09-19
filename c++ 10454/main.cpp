#include <iostream>
#include<stdio.h>
using namespace std;

int main(void)
{
    long long int a,b;
    int num;

    cin>>num;

    int i=0;

    while(i<num){
        cin>>a>>b;
        long long int add;
        add=a+b;
        if(add%2){
            printf("impossible\n");
            i++;
            continue;
        }
        add/=2;

        long long int minus;
        minus=a-add;
        if(minus<0){
            printf("impossible\n");
            i++;
            continue;
        }
        printf("%lld %lld\n",add,minus);
        i++;
    }

    return 0;
}
/*
#include<iostream>
#include<string.h>
using namespace std;

int main(void)
{
    int num,i=0;

    cin>>num;

    while(i<num)
    {
        int a[20]={0},b[20]={0};
        int add[20]={0},minus[20]={0};
        char strA[20],strB[20];

        cin>>strA>>strB;

        int iA=0,iB=0;

        while(strA[iA]!='\0')
            iA++;
        while(strB[iB]!='\0')
            iB++;

        int k,j;

        for(k=iA-1,j=0;k>=0;k--,j++)
            a[j]=strA[k]-'0';

        for(k=iB-1,j=0;k>=0;k--,j++)
            b[j]=strB[k]-'0';

        int x,y;

        int carry=0;
        for(int i=0;i<iA;i++)
        {
            int total;
            total=a[i]+b[i]+carry;
            add[i]=total%10;
            carry=total/10;
        }
        carry=0;
        int resume;
        for(int i=0;i<iA;i++)
        {
            resume=a[i]-carry;
            carry=0;
            if(resume>=b[i]){
                minus[i]=resume-b[i];
                carry=0;
            }else{
                minus[i]=10+resume-b[i];
                carry++;
            }
        }

        iA--;
        while(add[iA]==0)
            iA--;
        iB--;
        while(minus[iB]==0)
            iB--;


        if((carry>0)||(add[0]%2!=0)||(minus[0]%2!=0))
            cout<<"impossible";
        else{
            for(int i=iA;i>=0;i--){
                if(add[i]%2==0)
                    cout<<add[i]/2;
                else{
                    cout<<add[i]/2;
                    add[i-1]+=(add[i]%2)*10;
                }
            }
            cout<<" ";
            for(int i=iB;i>=0;i--){
                if(minus[i]%2==0)
                     cout<<minus[i]/2;
                else{
                    cout<<minus[i]/2;
                    minus[i-1]+=(minus[i]%2)*10;
                }
            }
        }
        cout<<endl;

          i++;
        }

    return 0;
}
*/
