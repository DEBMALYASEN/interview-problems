/* sort coulmn and row wise */
/* Sort each row of the matrix.
Get transpose of the matrix.
Again sort each row of the matrix.
Again get transpose of the matrix.      */
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
	sort(a[i],a[i]+n);
	for (int i = 0; i < m; i++)
	{
    for (int j = i + 1; i < n; i++)
	 {
		swap(a[i][j],a[j][i]);
    }
    }
    	for(i=0;i<n;i++)
	sort(a[i],a[i]+m);
		for (int i = 0; i < m; i++)
	{
    for (int j = i + 1; i < n; i++)
	 {
		swap(a[i][j],a[j][i]);
    }
    }
    
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cout<<a[i][j]<<" ";

	cout<<endl;    }
}
