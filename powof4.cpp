/* power of 4 */
#include<iostream>
using namespace std;
int main()
{
	int n,c;
	cin>>n;
	if(n!=0 && (n &(n-1))==0)   // only one 1
		{   c=0;
		while(n>1)
		{
			n>>=1;
			c++;
			
		}
		if (c%2==0)
		cout<<"pow of 4";
		else
		cout<<"not pow of 4";
	}
	else
	cout<<"not pow of 4";
	
}

