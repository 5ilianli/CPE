#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int n;

    while(cin>>n){
        int a[n],b[n];
        bool flag=true;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=0;
        }
        for(int i=1;i<n;i++){
            int d=abs(a[i]-a[i-1]);
            if(d>=n) {flag=false;break;}
            else b[d]++;
        }
        if(!flag) cout<<"Not jolly\n";
        else{
            for(int i=1;i<n;i++)
                if(b[i]==0||b[i]>1) {flag=false;break;}
            if(!flag) cout<<"Not jolly\n";
            else cout<<"Jolly\n";
        }

    }

    return 0;
}
