#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int N, casenum = 1;
  long long S[20], maxproduct, temp;

  while( scanf( "%d", &N ) != EOF ){ /* a useful skill! */
    for( int i = 0; i < N ; i++ )
      scanf( "%lld", &S[i] );

    maxproduct = 0;
    for( int i = 0 ; i < N ; i++ ){
      temp = 1;
      for( int j = i ; j < N ; j++ ){ /* directly duplicately product the number, 
                                         and find the largest result */
        temp *= S[j];
        if( temp > maxproduct ) maxproduct = temp;
      }
    }
    printf( "Case #%d: The maximum product is %lld.\n\n", casenum++, maxproduct );

  }
  return 0;
} 





/* old idea:
#include <iostream>
#include<stdio.h>
#include<memory.h>
#include<algorithm>
using namespace std;

int addf(int copyB[],int elements,int index);

bool compare(int a,int b)
{
    return a>b;
}

int main(void)
{
    int a,caseNum=1;

    while(cin>>a){
      int b[a];
      int copyB[a];
      int k=0;
      memset(b,0,a);
      for(int i=0;i<a;i++){
         cin>>b[i];
         copyB[i]=b[i];
         if(b[i]==0)
            k++;
      }

      int check[18]={0};
      int checkIndex=0;
      int index=0;
      int start=0;
      if(k!=0){
        while(index<a){
        if((b[index]==0&&k>0)){
            check[checkIndex]=addf(copyB,index-start,start);
            start=index;
            checkIndex++;
            k--;
        }else if(k==0&&(index+1==a)){
            check[checkIndex]=addf(copyB,index-start+1,start);
            checkIndex++;
        }
        index++;
        }
        sort(check,check+checkIndex,compare);
      }else
        check[checkIndex]=addf(copyB,a,0);

      int result=check[0];
      cout<<"Case #"<<caseNum<<": The maximum product is "<<result<<"."<<endl;
      caseNum++;
      cout<<endl;
    }

    return 0;
}

int addf(int copyB[],int elements,int index)
{
    int minusNum=0;
    sort(b,b+elements,compare);
//    for(int i=0;i<index+elements;i++)
//        cout<<b[i];
//    cout<<endl;
    for(int i=index;i<index+elements;i++)
        if(b[i]<0)
        minusNum++;
    int addNum=elements-minusNum;
    long long int result=1;
      for(int i=index;i<addNum;i++)
            result*=b[i];
      if(minusNum%2==0)
        for(int i=addNum;i<addNum+minusNum;i++)
            result*=b[i];
      else if(minusNum%2!=1)
        for(int i=minusNum;i>addNum;i--)
            result*=b[i];
    return result;
}
*/
