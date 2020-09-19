#include <iostream>
#include <queue>
using namespace std;

int prime[4000];

int main(void)
{
    int index=0;
    for(int n=2;n<=35000;n++){
        int x=1;
        for(int i=2;i*i<=n;i++)
            if(n%i==0){
                x=0;
                break;
            }
        if(x){
            prime[index]=n;
            index++;
        }
    }

    int n;
    while(cin>>n,n){
        int m=0;
        int x=prime[m];
//        int ans=0;
//        for(int i=2;i<=n;i++)
//            ans=(ans+prime[n-i])%i;
        queue<int> q;
        for(int i=1;i<=n;i++)
            q.push(i);
//        cout<<q.front()<<"******";
        while(q.size()>1){
            for(int i=1;i<x;i++){
                int temp=q.front();
                q.pop();
                q.push(temp);
            }
 //           cout<<q.front()<<"///////";
            q.pop();
            m++;
            x=prime[m];
        }
       cout<<q.front()<<endl;
       q.pop();
//       cout<<ans+1<<endl;
    }


    return 0;
}
