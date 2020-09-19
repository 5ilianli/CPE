#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> p;
    int t=0;

    for(int i=2;;i++){
        int d;
        for(d=2;d*d<=i;d++){
            if(i%d==0) break;
        }
        if(d*d>i) {p.push_back(i);t++;}
        if(t==3501) break;
    }

    int n;

    while(cin>>n,n){
        queue<int> q;
        for(int i=1;i<=n;i++) q.push(i);
        int i=0;
        while(q.size()!=1){
            int kill=p[i];
            for(int i=1;i<kill;i++){
                int tmp=q.front();
                q.pop();
                q.push(tmp);
            }
            q.pop();
            i++;
        }
        cout<<q.front()<<endl;
    }

    return 0;
}
