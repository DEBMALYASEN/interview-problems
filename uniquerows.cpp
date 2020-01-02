/* unique rows */
#include<bits/stdc++.h>
using namespace std;
int main()
{        int i,j;
   int m=0,n=0;
	cin>>m;
	int a[m][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		cin>>a[i][j];
	}
	unordered_set<string> set;

    for(int i = 0; i < m; i++)
    {
        string s = "";

        for(int j = 0; j < m; j++)
            s += to_string(a[i][j]);

        if(set.count(s) == 0)
        {
            set.insert(s);
            cout << s << endl;

        }
    }

}
