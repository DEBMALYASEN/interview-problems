/*Given two sorted arrays and a number x, find the pair whose sum is closest to x and the pair has an element from each array.
We are given two arrays ar1[0…m-1] and ar2[0..n-1] and a number x, we need to find the pair ar1[i] + ar2[j]
 such that absolute value of (ar1[i] + ar2[j] – x) is minimum.  */
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 	int m,n,i;
 	cin>>m;
 	vector<int>a(m);
 	for(i=0;i<m;i++)
 	cin>>a[i];
 	cin>>n;
 	vector<int>b(n);
 	for(i=0;i<n;i++)
 	cin>>b[i];
 	int x;
 	cin>>x;
 	int d=INT_MAX;
 	int l=0,u=n-1;
 	int p ,q;
 	while(l<m && u>=0)
 	{
 		if(abs(a[l]+a[u]-x)<d)
 	    {
		d= abs(a[l]+a[u]-x)  ;
 		p=a[l];
 		q=b[u];
		}
 		else if(a[l]+b[u]>x)
 		u--;
 		else
 		l++;
	 }
	 cout<<p<<" "<<q;
 	
 }
