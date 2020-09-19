#include<iostream>
#include<cstdio>
using namespace std;

int check(int i,int j,int x,int y,char mine[][100])
{
    return (i>=0&&j>=0)&&(i<x&&j<y)&&(mine[i][j]!='*');
}

int main(void)
{
    int a,b,Case=1;

    while(cin>>a>>b&&a!=0&&b!=0){
        char mine[100][100],ch;
        char aa[a][b];
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++)
                aa[i][j]='0';
        for(int i=0;i<a;i++)
            cin>>mine[i];

        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++){
                if(mine[i][j]=='*'){
                    if(check(i-1,j-1,a,b,mine))
                        aa[i-1][j-1]++;
                    if(check(i-1,j,a,b,mine))
                        aa[i-1][j]++;
                    if(check(i-1,j+1,a,b,mine))
                        aa[i-1][j+1]++;
                    if(check(i,j-1,a,b,mine))
                        aa[i][j-1]++;
                    if(check(i,j+1,a,b,mine))
                        aa[i][j+1]++;
                    if(check(i+1,j-1,a,b,mine))
                        aa[i+1][j-1]++;
                    if(check(i+1,j,a,b,mine))
                        aa[i+1][j]++;
                    if(check(i+1,j+1,a,b,mine))
                        aa[i+1][j+1]++;
                    aa[i][j]='*';
                }
            }
        if(Case!=1)
           cout<<endl;
        cout<<"Field #"<<Case<<":\n";
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout<<aa[i][j];
            }
            cout<<endl;
        }
        Case++;
    }

    return 0;
}
