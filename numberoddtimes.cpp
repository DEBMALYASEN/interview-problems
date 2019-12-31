/* number occuring odd number of times */
#include<bits/stdc++.h >
using namespace std;
int main()
{
	int a[5]={1,2,3,3,4};
	unordered_map<int,int>x;
	for(auto i:a)
	x[i]+=1;
	for(auto i:x)
	{
	  if(i.second%2==1)
	  cout<<i.first<<"\n";
    }
	
}

