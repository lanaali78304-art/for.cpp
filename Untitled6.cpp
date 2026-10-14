#include<iostream>
using namespace std;

int main()
{
	int num ;
	cout<<"Enter your num "<<endl ;
	cin>>num ;
	int sum ;
	for(int i=1 ; i<=num ; i+=2)
	{
		sum+=i ;
		cout<<sum<<endl ;
	}
	
}
