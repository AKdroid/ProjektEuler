#include<iostream>
#include<math.h>

using namespace std;

int isprime(long num){				//returns 1 if num is prime else 0
	for(int n=2;n<=sqrt(num);n++){
		if(num%n==0){
			return 0;		
		}	
	}
	return 1;
}

int main(){
long numh=6008,numm=5147,numl=5143;

long factor=3,max=0;
 for(factor=3;factor<=sqrt(600851475143);factor=factor+2){
{
	if(isprime(factor)){
		
		long rem1=numh%factor;				//performs 3 digit division by  
		long temp=rem1*10000+numm;			//by considering 4 decimal digits as
		long rem2=temp%factor;				//1 digit.
		long temp2=rem2*10000+numl;			//To tackle the problem of large numbers
		if(temp2 % factor==0)				//
			max=factor;				//if perfectly divisible max = current factor
		}	
	}
	
}
cout << "largest prime factor is " << max;
return 0;
} 
