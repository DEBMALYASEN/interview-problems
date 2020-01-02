/*Given a matrix, clockwise rotate elements in it*/
#include<bits/stdc++.h>
using namespace std;
int main()
{        int i,j,row=0,col=0,prev,curr;
   int m=0,n=0;
	cin>>m>>n;
	int mat[m][n];
	int p=m,q=n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>mat[i][j];
	}
	while (row < m && col < n)
    {

        if (row + 1 == m || col + 1 == n)
            break;
        prev = mat[row + 1][col];
        for ( i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
        for (i = row; i < m; i++)
        {
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
        }
        n--;
        if (row < m)
        {
            for (int i = n-1; i >= col; i--)
            {
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
            }
        }
        m--;
        if (col < n)
        {
            for (int i = m-1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
    	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}

