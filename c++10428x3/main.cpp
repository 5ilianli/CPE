#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    /*
    int a=1000000,num=0,d;
    for(int i=2;i<a;i++){
        for(d=2;d*d<i;d++)
            if(i%d==0) break;
        if(i<=d*d) num++;
    }
    cout<<num;//num=78666
    */

    int n;

    int a=1000000,num=0,d;
    vector<int> p;
    for(int i=2;i<a;i++){
        for(d=2;d*d<i;d++)
            if(i%d==0) break;
        if(i<d*d) p.push_back(i);
    }
    /*
    for(vector<int>::iterator itr=p.begin();itr!=p.end();itr++)
        cout<<*itr<<" ";
    */

    while(cin>>n){
        vector<int>::iterator itr;
        for(itr=p.begin();(*itr)*(*itr)<n;itr++)
            if(n%(*itr)==0) break;

        if((*itr)*(*itr)>n){
            int m=0,tmp=n;
            while(n!=0){
                m=m*10+n%10;
                n/=10;
            }

            if(m!=tmp){//m,n要是不一樣的質數
               vector<int>::iterator itr2;
               for(itr2=p.begin();(*itr2)*(*itr2)<m;itr2++)
                  if(m%(*itr2)==0) break;
               if((*itr2)*(*itr2)>m) cout<<tmp<<" is emirp.\n";
               else cout<<tmp<<" is prime.\n";
            }else cout<<tmp<<" is prime.\n";
        }else
           cout<<n<<" is not prime.\n";
    }



    return 0;
}
