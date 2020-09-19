#include <iostream>
using namespace std;

int main(void)
{
    int num;

    while(cin>>num&&num!=0){
        int card[num];
        int discard[num];
        for(int i=0;i<num;i++){
            card[i]=i+1;
            discard[i]=0;
        }

        int len=num;
        int index=0;
        while(len!=1){
            len--;
            discard[index]=card[0];
            int temp=card[1];
            for(int i=2;i<num;i++){
                card[i-2]=card[i];
            }
            card[len-1]=temp;
            index++;
        }
        cout<<"Discarded cards:";
        for(int i=0;i<index;i++){
            cout<<" "<<discard[i];
            if(i+1!=index)
                cout<<",";
        }
        cout<<endl;
        cout<<"Remaining card:"<<" "<<card[0]<<endl;
    }

    return 0;
}
