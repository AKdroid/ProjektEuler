#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int isprime(long num){				//returns 1 if num is prime else 0
	for(int n=2;n<=sqrt(num);n++){
		if(num%n==0){
			return 0;		
		}	
	}
	return 1;
}

int main()
{
unsigned long long sum =5;
cout << sizeof(sum)<<endl;
for(long num =5;num <2000000;num=num+2){
	if(isprime(num)) sum=sum+num;
}
cout << sum<<endl<<sum-1429100000000;

return 0;
} 
