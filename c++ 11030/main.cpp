#include <iostream>
#include <cstring>
#include <climits>
#include <cstdlib>
#include <cmath>
using namespace std;

int gcd(int i,int j)
{
    while(j)
        swap(i%=j,j);
    return abs(i);
}

int main(void)
{
    string s;

    while(cin>>s,s!="0"){
        s=s.substr(0,s.size()-3).substr(2);
        int ansu,ansd=INT_MAX,n=s.size();
        for(int i=1;i<=n;i++){
            int u=atoi(s.c_str())-atoi(s.substr(0,n-i).c_str());
            int d=pow(10.,n)-pow(10.,n-i);
            int g=gcd(u,d);
            u/=g;
            d/=g;
            if(d<ansd){
                ansd=d;
                ansu=u;
            }
        }
        cout<<ansu<<"/"<<ansd<<endl;
    }

    return 0;
}
