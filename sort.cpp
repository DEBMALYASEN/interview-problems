/* sort matrix */
/*Given a matrix, clockwise rotate elements in it*/
/* similar to sorting a matrix in way increasing order */
#include<bits/stdc++.h>
using namespace std;
int main()
{        int i,j;
   int m=0,n=0;
	cin>>m>>n;
	int a[m][n];
	int b[m*n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>a[i][j];
	}
	int k=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
 b[k++]=a[i][j];
	}
	sort(b,b+m*n);
	int t=0;
	  for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
  cout<<b[t++]<<" ";
  cout<<endl;
	}
}
