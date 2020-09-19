#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int N;

    //基本上,要是想不到甚麼好的數學算法,就是暴力解,且這題測沒有很多
    while(cin>>N,N){
        int m;
        for(m=1;;m++){
            queue<int> q;
            for(int i=1;i<=N;i++) q.push(i);
            q.pop();
            int j=1;
            while(q.size()!=1){
                int tmp=q.front();
                q.pop();
                if(j%m!=0) q.push(tmp);
                j++;
            }
            if(q.front()==13) break;
        }
        cout<<m<<endl;
    }

    return 0;
}
