#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
    char str[100][101];
    int index=0,Max=0;
    int len[100]={0};

    while(cin.getline(str[index],101)){
        //cin.getline和cin一樣,遇到EOF都會自動停止,不用額外制定截止字元
        len[index]=strlen(str[index]);
        if(len[index]>Max)
            Max=len[index];
        for(int add=len[index];add<Max;add++){
        //對先出現的較長字元來說,後面較短的字元,在旋轉九十度後,要補上空格
        //但是對先出現的較短字元來說,後面較長的字元,在旋轉九十度後,不用補上空格
        //這題目就難在甚麼時候要補空格,甚麼時候不用補空格
            str[index][add]=' ';
            len[index]++;
        }
        index++;
    }

    for(int j=0;j<Max;j++){
        for(int i=index-1;i>=0;i--)
            if(j<len[i])//這裡也是題目考點:表示在原本i row裡,有字符可以印出,
                        //而不是空字符(不要印出空字符,那是illegel的)
               cout<<str[i][j];
        cout<<endl;
    }

    return 0;
}
