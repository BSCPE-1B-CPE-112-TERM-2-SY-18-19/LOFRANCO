#include<iostream>
using namespace std;

class kenneth
{
	public:
		void wasteful(int a[10]);
		int digit_count(int num);
		int prime_factor(int num);
};

int main()
{
	kenneth call;
	int array[10]={12, 34, 25, 49, 52, 90, 74, 69, 82, 16};
	call.wasteful(array);
	return 0;
}

void kenneth::wasteful(int a[10])
{
	cout<<"Digit counts compared to Factors"<<endl;
		for(int i=0;i<10;i++)
	{
		cout<<"ARRAY["<<i+1<<"] = "<<a[i]<<" = "<<digit_count(a[i])<< " - "<<prime_factor(a[i])<<endl;

	}
	cout<<endl<<"Wasteful Numbers: ";
	for(int i=0;i<10;i++)
	{
		//cout<<"ARRAY["<<i+1<<"] "<<a[i]<<endl;
		//cout<<a[i]<<" - "<<digit_count(a[i])<<endl;	
		//cout<<a[i]<<" - "<<prime_factor(a[i])<<endl;
		
		if(digit_count(a[i])<prime_factor(a[i]))
			{
				cout<<a[i]<<" ";
			}
	}
		
}
int kenneth::digit_count(int num){
		int digit=0;
		while(num!=0)
			{
				digit++;
				num/=10;
			}
	return digit;
	
}
int kenneth::prime_factor(int num)
	{
		int d=2,factor=0;
		
			while(num>=d)
				{
					if(num%d==0)
						{
							factor++;
							num=num/d;
						}
					else
						{
							d++;
						}
				}
			return factor;
	}



