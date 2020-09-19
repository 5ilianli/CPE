#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}

int main(void)
{
    int n;
    cin>>n;
    cin.get();

    int a[26]={0},b[26]={0};
    char str[10000];

    for(int i=0;i<n;i++){
        cin.getline(str,10000,'\n');
        int len=strlen(str);
        for(int j=0;j<len;j++){
            if(isalpha(str[j])){
               char ch=tolower(str[j]);//tolower()函式要記住
               int c=ch-'a';//不要再多減一
               a[c]++;
               b[c]++;
            }
        }
    }

    sort(b,b+26,cmp);//那個cmp的寫法要記住,sort預設由小到大排

    int num=0;
    for(int i=0;i<26;i++)
        if(b[i]!=0) num++;

    int check=0;
    for(int i=0;i<26;i++){
       for(int j=0;j<26;j++){
          if(b[i]==a[j]&&a[j]!=0){
            char c=j+'A';
            cout<<c<<" "<<b[i]<<endl;
            //原本想寫if(check+1!=num) cout<<endl;來減少多印一行
            //結果這次多印一行是正確的...總之WA就互相測試一下格式對不對吧...
            a[j]=0;
            check++;
          }
       }
    }

    return 0;
}
