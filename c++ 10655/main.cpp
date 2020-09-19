/*
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int n;
int num[1005];
int ans;
int a, b, c, d;
int main()
{
    while (scanf("%d", &n) != EOF && n)
    {
	int judge = 0;
	for (int i = 0; i < n; i ++)
	    scanf("%d", &num[i]);
	sort(num, num + n);
	for (d = n - 1; d >= 0; d --)
	{
	    for (a = n - 1; a > 1; a --)
	    {
		if (a != d)
		    ans = num[d] - num[a];
		for (b = 0, c = a - 1; b < c;)
		{
		    if (num[b] + num[c] == ans)
		    {
			judge = 1;
			break;
		    }
		    else if (num[b] + num[c] < ans)
			b ++;
		    else
			c --;
		}
		if (judge)
		    break;
	    }
	    if (judge)
		break;
	}
	if(judge)
	    printf("%d\n", num[d]);
	else
	    printf("no solution\n");
    }
    return 0;
}
*/

#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int a,int b)
{
    return (a>b);
}

int main(void)
{
    int n;

    while(cin>>n,n){
        int x[n];
        for(int i=0;i<n;i++)
            cin>>x[i];
        sort(x,x+n,cmp);
        int ans=0,check=0,s;
        for(int d=0;d<n;d++){
            for(int a=0;a<n-1;a++){
                if(x[d]!=x[a])
                   ans=x[d]-x[a];
                for(int c=a+1,b=n-1;c<b;){
                    if(x[c]+x[b]==ans){
                        check=1;
                        s=d;
                        break;
                    }else if(x[c]+x[b]<ans)
                        b--;
                    else
                        c++;
                }
                if(check)
                    break;
            }
            if(check)
                break;
        }
        if(check)
            cout<<x[s]<<endl;
        else
            cout<<"no solution\n";

    }

    return 0;
}

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find(vector<int>& set)
{
    for (int d = set.size() - 1; d >= 0; --d) // find the largest d
        for (int a = 0; a < set.size(); ++a)
            for (int b = a + 1; b < set.size(); ++b)
                for (int c = b + 1; c < set.size(); ++c)
                    if ( (set[d] == set[a] + set[b] + set[c]) &&
                            a != d && b != d && c != d )

                        return set[d];
    return INT_MAX;
}

int main()
{
    int numElement;
    while (cin >> numElement,numElement)
    {
        if (numElement == 0)
            break;

        // input
        vector<int> set(numElement);

        for (int i = 0; i < numElement; ++i)
            cin >> set[i];

        sort(set.begin(), set.end());

        // find d = a + b + c
        int d = find(set);
        if ( d == INT_MAX )
            cout << "no solution\n";
        else
            cout << d << "\n";
    }
    return 0;
}
*/
