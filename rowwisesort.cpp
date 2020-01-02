/*row wise sort */
#include<bits/stdc++.h>
using namespace std;
int main()
{        int i,j;
   int m=0,n=0;
	cin>>m>>n;
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>a[i][j];
	}
	for(i=0;i<m;i++)
	sort(a[i],a[i]+n)   ;
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cout<<a[i][j];
	}
	cout<<endl;
}
