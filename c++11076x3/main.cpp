#include <iostream>
#include <vector>
#include <algorithm>//要加這個函示庫,才能使用vector的find()
using namespace std;

int gcd(int a,int b)
{
    int tmp;
    while(a%b!=0){
        tmp=a;
        a=b;
        b=tmp%b;
    }
    return b;
}

int main(void)
{
    vector<int> p;
    int num=0;

    for(int i=2;i<501;i++){
        int d;
        for(d=2;d*d<=i;d++)
            if(i%d==0) break;
        if(d*d>i){
           p.push_back(i);
           num++;
        }
    }

    int n;

    while(cin>>n,n){
        int g=0;
        for(int i=1;i<n;i++)
           for(int j=i+1;j<=n;j++){
              vector<int>::iterator itr=find(p.begin(),p.end(),i);
              vector<int>::iterator itr2=find(p.begin(),p.end(),j);
              if(itr!=p.end()&&itr2!=p.end())
                 g++;
              else{
                 g+=gcd(i,j);
              }
           }
        cout<<g<<endl;
    }
    return 0;
}
