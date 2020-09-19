#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main(void)
{
    char str1[1001],str2[1001];

    while(cin>>str1>>str2){
        map<char,int> s1,s2;
        int l1=strlen(str1),l2=strlen(str2);
        for(int i=0;i<l1;i++)
            s1[str1[i]]++;
        for(int i=0;i<l2;i++)
            s2[str2[i]]++;

        for(char i='a';i<='z';i++){
            if(s1[i]>0&&s2[i]>0){
                //兩個序列共同重複的字母數也要印出來
                int m=0;
                if(s1[i]<s2[i]) m=s1[i];
                else m=s2[i];
                for(int j=0;j<m;j++) cout<<i;
            }
        }
        cout<<endl;
    }

    return 0;
}
