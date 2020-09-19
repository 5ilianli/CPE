#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    int n;
    cin>>n;

    while(n--){
        int M,N,Q;
        cin>>M>>N>>Q;
        char a[M][N];
        for(int i=0;i<M;i++)
            for(int j=0;j<N;j++)
                cin>>a[i][j];

        int rc[Q][2];
        for(int i=0;i<Q;i++)
            cin>>rc[i][0]>>rc[i][1];

        cout<<M<<" "<<N<<" "<<Q<<endl;

        //不要想呈螺旋狀擴張,而是由上到下,左到右,
        //一行行開始擴張,(r-i->r+i)&(j-i->j+i)
        for(int q=0;q<Q;q++){
            int r=rc[q][0],c=rc[q][1],i;
            char cmp=a[r][c];
            for(i=1;i<M;i++){
                int flag=1;
                for(int j=r-i;j<=r+i&&flag;j++)
                for(int k=c-i;k<=c+i;k++){
                    //設立if只要有一條件沒成立就break
                    if(j<0||k<0||j>=M||k>=N||cmp!=a[j][k]){
                        flag=0;
                        break;
                    }
                }
                if(!flag) break;
            }
            cout<<i*2-1<<endl;
        }

    }

    return 0;
}
