#include<iostream>
#include<algorithm>
using namespace std;

void find_mid(int a[],int num)
{
    int Min,Max,nx,np,i;
    if(num%2==1){
        Min=a[num/2];
        for(nx=0,i=0;i<num;i++)
            if(a[i]==Min)
            nx++; //may exit the same medium
        np=1;
    }else{
        Min=a[num/2-1];
        Max=a[num/2];
        for(nx=0,i=0;i<num;i++)
            if(Min<=a[i]&&a[i]<=Max)
            nx++;
        np=Max-Min+1;
    }
    cout<<Min<<" "<<nx<<" "<<np<<endl;
}

int main(void)
{
    int num;

    while(cin>>num){
        int a[num];
        for(int i=0;i<num;i++)
            a[i]=0;
        for(int i=0;i<num;i++)
            cin>>a[i];
        sort(a,a+num);
        find_mid(a,num);
    }
    return 0;
}


/* old idea
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int A(int a[],int size);

int main(void)
{
    int num,x;

    while(cin>>num){
        int a[num];
        for(int i=0;i<num;i++)
            a[i]=0;
        for(int i=0;i<num;i++)
            cin>>a[i];
        x=A(a,num);
        int check[num];
        for(int i=0;i<num;i++)
            check[i]=0;
        for(int i=0;i<num;i++)
            for(int j=0;j<num;j++){
                check[i]+=abs(a[i]-a[j]);
            }
        for(int i=0;i<num;i++)
            check[i]=0;


        int j=0;
        for(int i=0;i<num;i++){
            if(x==a[i])
            j++;
            }
        cout<<x<<" "<<j<<endl;
    }


    return 0;
}

int A(int a[],int size)
{
    sort(a,a+size);

    int sum=0;

    sum+=abs(a[0]-a[1]);
    sum+=abs(a[size-1]-a[size-2]);

    for(int i=1;i<size-1;i++)
        sum+=min(a[i]-a[i-1],a[i]-a[i+1]);

    return sum;
}
*/
