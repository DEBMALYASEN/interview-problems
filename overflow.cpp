/* integer overflow */
#include<iostream>
using namespace std;
int main()
{
	int x,y ;
	cin>>x>>y;
	int r=x+y;
	if(r<0&& x>0&&y>0)
	cout<<"overflow";
	else   if(r>0 && x<0&& y<0)
	cout<<"overflow";
	else
	cout<<r;

}
