#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<" To check whether a person is eligible for voting or not ?";
	cout<<"\n.............................................";
	cout<<"\nEnter age=";
	cin>>age;
	if(age>=18)
	{
		cout<<"He/She is eligible for voting.";
	}
	else
	{
		cout<<"He/She is not eligible for voting.";
		cout<<"\nHe/she is considered as minor.";
	}
	return 0;
}
