#include <iostream>
#include <queue>
using namespace std;

char s[101][101];
int n,m;

//位向量,注意配對每一組x,y座標-->即是對這個點探索周圍八個方向
int dx[8]={0,0,-1,-1,-1,1,1,1};
int dy[8]={-1,1,-1,0,1,-1,0,1};

void BFS(int i,int j)
{
    int x,y;
    pair<int,int> p;
    queue<pair<int,int> > q;//q是用來儲存要BFS的點
    p.first=i;p.second=j;
    q.push(p);

    while(!q.empty()){
        x=q.front().first;
        y=q.front().second;
        q.pop();
        for(int i=0;i<8;i++){
            if(x+dx[i]>=0&&x+dx[i]<m&&y+dy[i]>=0&&y+dy[i]<n
               &&s[x+dx[i]][y+dy[i]]=='@'){
               p.first=x+dx[i];
               p.second=y+dy[i];
               s[x+dx[i]][y+dy[i]]='*';
               q.push(p);//儲存下一個要BFS的點
            }
        }
    }

}

int main(void)
{
    while(cin>>m>>n,m&&n){
        int c=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>s[i][j];
        //每一個頂點的遍歷
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++){
				if (s[i][j]=='@'){//發現油田時，數量++
					c++;
					BFS(i,j);
					//重點:BFS把整塊油田變成*,下次就不會被計算到了!!!
					//因為c代表的是油田區域,
					//為了不要重複計算,所以要對已發現的油田地點,查找其鄰近是否有油田
				}
			}
		}
        cout<<c<<endl;
    }


    return 0;
}

/*
#include <cstdio>
#include <queue>
using namespace std;
char s[102][102];
//位向量
int dx[8]={0,0,-1,-1,-1,1,1,1};
int dy[8]={-1,1,-1,0,1,-1,0,1};
int n,m;
void BFS(int i,int j)
{
	int x,y;
	pair <int ,int> p;
	queue <pair<int,int> > q;
	p.first=i;p.second=j;
	q.push(p);
	while(!q.empty())
	{
		x=q.front().first;
		y=q.front().second;
		q.pop();
		for (int i=0;i<8;i++)
		{
			if (x+dx[i]>=0&&x+dx[i]<n&&y+dy[i]>=0&&y+dy[i]<m&&s[x+dx[i]][y+dy[i]]=='@')
			{
				p.first=x+dx[i];
				p.second=y+dy[i];
				s[x+dx[i]][y+dy[i]]='*';//置換
				q.push(p);
			}
		}
	}
}
int main()
{
	int c;
	while(~scanf ("%d %d",&n,&m)&&n&&m)
	{
		c=0;
		for (int i=0;i<n;i++)
		{
			scanf ("%s",s[i]);//輸入圖
		}
		//每一個頂點的遍歷。
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				if (s[i][j]=='@')
				//發現油田時，數量++
				{
					c++;
					BFS(i,j);//BFS把整塊油田變成 *,下次就不會被計算到了.
				}
			}
		}
		printf ("%d\n",c);
	}
	return 0;
}
*/
