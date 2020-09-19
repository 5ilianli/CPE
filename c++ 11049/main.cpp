#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int N,x;

    while(cin>>N,N){
        priority_queue<int,vector<int>,greater<int> > PQ;
        for(int i=0;i<N;i++){
            cin>>x;
            PQ.push(x);
        }
        int cost=0;
        while(PQ.size()!=1){
            x=PQ.top();
            PQ.pop();
            x+=PQ.top();
            PQ.pop();
            cost+=x;
            PQ.push(x);
        }
        cout<<cost<<endl;
    }

    return 0;
}
