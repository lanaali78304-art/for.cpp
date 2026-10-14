#include<iostream>
using namespace std;

int main()
{
	int n ;
	cout<<"Enter your num "<<endl ;
	cin>>n ;
	for(int i =0 ; i<=n ; i++)
	{
		if(n % 2 ==0)
		{
			cout<<i<<"Even num "<<endl ;
		}
		else
		{
			cout<<i<<"Ood num "<<endl ;
		}
	}
}
