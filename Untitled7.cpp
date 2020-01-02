/*This technique shows how a nested for loop in few problems can be converted to single for loop and hence reducing the time complexity.*/
/*subarray with a given sum */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	int m=0;
	int w;
	for(int i=0;i<k;i++)
	m+=a[i];
	w=m;
	for(int i=k;i<n;i++)
	{
	w+=a[i]-a[i-k];
	if(w>m)
	m=w;
	}
	cout<<m;

}
