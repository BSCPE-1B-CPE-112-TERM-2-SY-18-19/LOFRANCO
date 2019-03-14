#include <iostream> 
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// global
class computer{
	public:
		void palindromic_prime(long x); // function for palindromic prime
		void wasteful_number(long x); // function for wasteful number
		long prime(long num);  //  making of function for prime
		long binary(long num1); //  making of function for binary
		long reverse(long num2); //  making of function for reverse
		long digit(long num3); //  making of function for digit
		long primefactorization(long num4); //  making of function for primefactorization

		long j,count,x;
		long pdtemp, bin, base, rem;
		long rev, temp, key;
		long caryl, digits;
		long factors,t,i;
		long rem1[100];
		long jean;
};

int main() {
	computer engineering; // creating object of computer
	long num,i;	// declaring variable num and i
    string str; // declaring variable str
    cout<<"INPUT STRING: ";
	cin>>str;
    cout << "The size of str is " << str.length() << " bytes.\n";

for (i=1;i<=str.length();i++)
{
	if (str.length()%2!=0){
		engineering.palindromic_prime(i); // storing the value of i to palindromic_prime
		cout<<i<<endl; // displaying i
	}
	else{
		engineering.wasteful_number(i); // storing the value of i to wasteful_number
		cout<<i<<endl; // displaying i
	}
}
	return 0;
}

void computer::palindromic_prime(long x){
	cout<<endl;
	prime(x); // storing the value of x to prime
}
void computer::wasteful_number(long x){
	digit(x); // storing the value of x to digit
	if (digits<factors){
		cout<<"WASTEFUL NUMBER: ";
	}
}

long computer::prime(long num){  // process of identifying whether a specific number is a prime or not

	count = 0;
	for (j=2;j<num;j++){
		if (num%j==0){
			count++;
		}
	}	
	if (count==0){
		binary(num); // storing the value of num to binary
	}
	else{
		cout<<endl;
	}
}
long computer::binary(long num1){ // process of getting the binary of a specific number

	pdtemp = num1;
	bin=0;
	base = 1;
	
	for (;pdtemp>0;){
		rem=pdtemp%2;
		bin=bin+rem*base;
		base = base*10;
		pdtemp=pdtemp/2;
	}
	reverse(bin); // storing the value of bin to reverse
}
long computer::reverse(long num2){ // process of reversing the binary of a number and compare the binary and the reverse one to identify whether it is a palindromic prime or not

	key=num2;
	temp=0;
	rev=0;

	for (;key!=0;){
		temp=key%10;
		key=key/10;
		rev=temp+(rev*10);
	}

	
	if (rev==num2){
		cout<<"PALINDROMIC PRIME:";
	}
}

long computer::digit(long num3){ //process of counting how many digit/s of a specific number
	caryl=num3;
	jean=num3;
	digits = 0;

	for (;caryl!=0;){
		caryl=caryl/10;
		digits++;
		}
		primefactorization(jean); // storing the value of jean to primefactorization
}

long computer::primefactorization(long num4){ // process of getting the factor and the number of factors of a specific number

	x=num4;
	factors=0;
	i=2;
	t=0;

	for (;x!=0;) {
	   if (x%i==0){
	       x=x/i;
	       rem1[t]=i;
	       t++;
	       factors++;
	       				if (x==1){
	              			break;
					              }
	           }
	       else{
		          i++;
	           }
	    }
	    
		printf("\n");
	
}

