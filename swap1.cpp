/* interchange top and lower rows */
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
	for(i=0;i<m;i++)
	swap(a[0][i],a[m-1][i]);

		for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		cout<<a[i][j]<<" ";

	cout<<endl;    }
}
