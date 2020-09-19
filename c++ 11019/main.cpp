#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    int moves;
    int up=1,n=2,w=3,e=4,s=5,down=6;

    while(cin>>moves&&moves){
        string b;
        up=1,n=2,w=3,e=4,s=5,down=6;
        int temp;
        while(moves--){
            cin>>b;
            if(b=="north"){
                temp=up;up=s;s=down;down=n;n=temp;
            }
            if(b=="south"){
                temp=up;up=n;n=down;down=s;s=temp;
            }
            if(b=="east"){
                temp=up;up=w;w=down;down=e;e=temp;
            }
            if(b=="west"){
                temp=up;up=e;e=down;down=w;w=temp;
            }
        }
        cout<<up<<endl;
    }

    return 0;
}
