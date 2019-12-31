/* left rotate right rotate*/
#include<iostream>
using namespace std;
int main()
{
	int n,d;
	cin>>n;
	cin>>d;
	cout<<"left rotate"<<((n<<d)|((n>>(32-d))))<<"\n";
	cout<<" right rotate"<<((n>>d)|((n<<(32-d))))<<"\n";
	
}

