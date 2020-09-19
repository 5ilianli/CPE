#include<iostream>
using namespace std;

int factor[2703664];

int main(void)
{
    for(int i=0;i<2703664;i++)
        factor[i]=1;
    factor[0]=0;
    factor[1]=0;
    for(int i=2;i<2703664;i++){
        if(factor[i]==1){
            for(int j=2;j*i<2703664;j++)
                factor[i*j]=factor[i]+factor[j];
        }
    }
    for(int i=2;i<2703664;i++)
        factor[i]+=factor[i-1];

    int num,Case=1;

    while(cin>>num){
        if(num<0)
            break;
        if(num==0)
            cout<<"Case "<<Case<<": "<<"0!\n";
        else{
            int left = 0, right = 2703664, mid = (left + right) / 2;
            while (left < right){
              if (num <= factor[mid])
                 right = mid;
              else
                 left = mid + 1;

            mid = (left + right) / 2;
            }
            int check=0;
            check=((factor[mid] == num) ? mid : -1);
            if(check>0)
               cout<<"Case "<<Case<<": "<<mid<<"!"<<endl;
            else
               cout<<"Case "<<Case<<": Not possible.\n";
        }
       Case++;
    }
    return 0;
}

/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> factor;

int main(void)
{
    for(int i=0;i<2750000;i++)
        factor.push_back(1);
    for(int i=2;i<factor.size();i++){
        if(factor[i]==1){
            for(int j=2;j*i<factor.size();j++)
                factor[i*j]=factor[i]+factor[j];
        }
    }
    for(int i=2;i<factor.size();i++)
        factor[i]+=factor[i-1];

    int num,Case=1;

    while(cin>>num){
        if(num<0)
            break;
        if(num==0)
            cout<<"0!\n";
        if(factor.at(num)!=NULL)
            cout<<factor.at(num)<<endl;
        else
            cout<<"-1\n";
    }

    return 0;
}
*/
