#include <iostream>
using namespace std;

bool check(int row,int col,int x,int y);

int main(void)
{
    int a,b,c;

    while((cin>>a>>b>>c)&&(a!=0)&&(b!=0)&&(c!=0)){

        char grid[a][b];
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++)
            cin>>grid[i][j];

        int loopCheck[a][b];
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++)
            loopCheck[i][j]=0;

        int loop=0;
        int row=0,col=c-1,step=0;
        loopCheck[row][col]++;
        do{
            switch(grid[row][col]){
               case 'N':{row--;
                         if(loopCheck[row][col]==0)
                           loopCheck[row][col]++;
                         else{
                           loop++;
                           loopCheck[row][col]++;
                         }
                         break;}
               case 'S':{row++;
                         if(loopCheck[row][col]==0)
                           loopCheck[row][col]++;
                         else{
                           loop++;
                           loopCheck[row][col]++;
                         }
                         break;}
               case 'E':{col++;
                         if(loopCheck[row][col]==0)
                           loopCheck[row][col]++;
                         else{
                           loop++;
                           loopCheck[row][col]++;
                         }
                         break;}
               case 'W':{col--;
                         if(loopCheck[row][col]==0)
                           loopCheck[row][col]++;
                         else{
                           loop++;
                           loopCheck[row][col]++;
                         }
                         break;}
            }
            if(loop>=2)
                break;
            step++;

        }while(check(row,col,a,b));

        int x=row,y=col;

        if(loop!=0){
            x=row,y=col;
            row=0;
            col=c-1;
            int beforeLoop=0;
            while(1){
                if(x==row&&y==col)
                    break;
                switch(grid[row][col]){
                   case 'N':{row--;break;}
                   case 'S':{row++;break;}
                   case 'E':{col++;break;}
                   case 'W':{col--;break;}
                }
                beforeLoop++;
            }
            beforeLoop--;

            cout<<beforeLoop<<" step(s) before a loop of "<<step-beforeLoop<<" step(s)\n";
        }else
            cout<<step<<" step(s) to exit\n";
    }


    return 0;
}

bool check(int row,int col,int x,int y)
{
    return ((row>=0&&row<x)&&(col>=0&&col<y));
}
