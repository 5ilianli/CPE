#include <iostream>
using namespace std;

void printResult(int a,int b,int index); /* to simplify the main code */

int main(void)
{
    int a,b;
    int result[1000][4]={0};
    int resultIndex=0;

    while(cin>>a>>b)
    {
        int index=0,boring=0;
        result[resultIndex][1]=a;
        result[resultIndex][2]=b;
        if((b!=0)&&(a!=0)&&(a!=b)&&(a>b)){/* we have to consider:
                                       a=1,b=0 ; a=0, b=1; a=0,b=0 ;
                                       a=1,b=1(or a==b) ; a<b */

        while(a>1){
          if(a%b!=0){
            boring++;
            break;
          }
          a/=b;
          index++;
        }

        if(boring>0)
            result[resultIndex][0]--;
        else{
            result[resultIndex][0]++;
            result[resultIndex][3]=index;}

        }else if((a==0)||(b==0)){
            result[resultIndex][0]--;
        }else if(a==b){
            result[resultIndex][0]--;
        }else if(a<b)
            result[resultIndex][0]--;

        if(result[resultIndex][0]<0)
            cout<<"Boring!"<<endl;
        else
            printResult(result[resultIndex][1],result[resultIndex][2],result[resultIndex][3]);
        resultIndex++;
    }

    return 0;
}

void printResult(int a,int b,int index)
{
    cout<<a<<" ";
    for(int i=0;i<index;i++)
    {
        cout<<a/b;
        a/=b;
        if(i+1!=index)
            cout<<" ";
    }
    cout<<endl;
}
