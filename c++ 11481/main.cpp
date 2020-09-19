#include <iostream>
using namespace std;

int main(void)
{
    int num,Case=1;

    while(cin>>num&&num!=0){
        int a[num][num];
        int index;
        if(num%2==0)
            index=num/2;
        else
            index=num/2+1;
        int total[index];
        for(int i=0;i<num;i++)
            for(int j=0;j<num;j++)
            a[i][j]=0;
        for(int i=0;i<index;i++)
            total[i]=0;
        for(int i=0;i<num;i++)
            for(int j=0;j<num;j++)
            cin>>a[i][j];
        for(int i=0;i<index;i++){
            for(int j=i;j<num-i;j++)
            total[i]+=(a[i][j]+a[num-i-1][j]);
            for(int j=i+1;j<num-i-1;j++)
            total[i]+=(a[j][i]+a[j][num-i-1]);
        }
        if(num%2)
           total[index-1]=a[index-1][index-1];
        else
           total[index-1]=a[index][index]+a[index][index-1]+a[index-1][index]+a[index-1][index-1];
        cout<<"Case "<<Case<<": ";
        for(int i=0;i<index;i++){
            cout<<total[i];
            if(i+1!=index)
                cout<<" ";
        }
        if(num!=0)
        cout<<endl;
        Case++;
    }

    return 0;
}
