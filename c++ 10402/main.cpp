#include<iostream>
using namespace std;

void sort(int a[],int b[]);

int main(void)
{
    int i=0,num;
    int abc[26]={0};/* record abc number */
    int sortABC[26]={0};/* to print from the most number of abc */
    cin>>num;
    char cry[num][1000];/* record sentences & the number of characters in a sentence must be large */
    cin.get();/* vital!!! use cin.get() to get a useless '\n' for fear that cin.getline() get it*/
    while(i<num){
        cin.getline(cry[i],1000);/* use getline(one sentence,can involve the most bits) */
        i++;
    }
    for(int i=0;i<num;i++)
    {
        int j=0;
        int k=0;
        while(cry[i][j]!='\0')
        {
           if(isalpha(cry[i][j])) /* isalpha() can use directly in #include<iostream> */
                if(isupper(cry[i][j])){
                   k=cry[i][j]-'A';
                   abc[k]++;
                }else{
                   k=cry[i][j]-'a';
                   abc[k]++;
                }
            j++;
        }
    }

    sort(abc,sortABC);
    i=0;
    while(sortABC[i]!=0){
        for(int j=0;j<26;j++)
            if((sortABC[i]==abc[j])&&(sortABC[i]!=0)){
                char x='A'+j;
                cout<<x<<" "<<sortABC[i]<<endl;
                sortABC[i]=0;
                abc[j]=0;
                break;
            }
        i++;
    }

    return 0;
}

void sort(int a[],int b[])
{
    int temp;

    for(int i=0;i<26;i++)
        b[i]=a[i];

    for(int i=0;i<26;i++)
        for(int j=i+1;j<26;j++)
            if(b[i]<b[j]){
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
        }
}
