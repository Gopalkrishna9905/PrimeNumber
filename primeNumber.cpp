#include<iostream>
using namespace std;

bool primeNumber(int num)
{
	for(int i =2;i<=num-1;i++)
	{
		if(num % 2==0)
		
			return false;		
		    	return true;		
	}
}

int main()
{
	int n;
	cout<<" enter number ";
	cin>>n;
	if(primeNumber(n))
	{
		cout<<" prime number ";
	}
	else{
		cout<<" not prime number";
	}
	
}
