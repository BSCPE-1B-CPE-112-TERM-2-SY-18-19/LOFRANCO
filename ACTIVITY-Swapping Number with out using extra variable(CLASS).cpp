#include<iostream>
using namespace std;

class kenneth
{
	public:
		long x,y,z;
		void twovariables();
		void threevariables();
};

int main()
{
	kenneth call;
	call.twovariables();
	call.threevariables();
	return 0;
}

void kenneth::twovariables()
{
	//Swapping Two Varibles
	cout<<"SWAPPING TWO VARIABLES"<<endl;
	cout<<"Input X: ";
	cin>>x;
	cout<<"Input Y: ";
	cin>>y;
	
	y=x+y;
	x=y-x;
	y=y-x;
	
	cout<<endl<<"Swapped Two Variables: "<<endl<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
}

void kenneth::threevariables()
{
	//Swapping Three Varibles
	cout<<endl<<"SWAPPING THREE VARIABLES"<<endl;
	cout<<"Input X: ";
	cin>>x;
	cout<<"Input Y: ";
	cin>>y;
	cout<<"Input Z: ";
	cin>>z;
	
	x=x+y;
	y=x-y;
	x=x-y; 
	z=z+x;
	x=z-x;
	z=z-x;
	
	cout<<endl<<"Swapped Three Variables: "<<endl<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	cout<<"Z = "<<z<<endl;
}
