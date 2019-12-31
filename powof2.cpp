/* power of 2 */
#include<iostream>
using namespace std;
int main()
{
	int n,c;
	cin>>n;
	if(n!=0 && (n &(n-1))==0)   // only one 1
		{
		cout<<"pow of 2";
	}
	else
	cout<<"not pow of 2";

}

