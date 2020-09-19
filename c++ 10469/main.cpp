#include<iostream>
using namespace std;

int main(void)
{
    int num,Test=1;

    while(cin>>num){
        int check[20001]={0};
        int a[num];
        int repeat=0;

        for(int i=0;i<num;i++)
            a[i]=0;
        for(int i=0;i<num;i++){
            cin>>a[i];
            if(a[i-1]>a[i])
                repeat++;
        }

        int i,j;
        for(i=0;i<num;i++){
            int add=a[i];
            int temp;
            for(j=i;j<num;j++){
                temp=add+a[j];
                check[temp]++;
                if(check[temp]>=2){
                    repeat++;
                    break;
                }
            }
            if(repeat)
                break;
        }
        if(repeat)
            cout<<"Case #"<<Test<<": It is not a B2-Sequence.\n\n";
        else
            cout<<"Case #"<<Test<<": It is a B2-Sequence.\n\n";
        Test++;
    }

    return 0;
}
