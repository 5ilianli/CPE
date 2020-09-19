#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main(void)
{
    int num,i=0;

    cin>>num;

    while(i<num)
    {
        int a[500]={0},relative,j=0,td=0;

        cin>>relative;

        while(j<relative){
            cin>>a[j];
            j++;
        }
        sort(a,a+relative);

        int mid=relative/2;

        for(int k=0;k<j;k++)
            td+=abs(a[k]-a[mid]);
        cout<<td<<endl;

        i++;
    }

    return 0;
}
