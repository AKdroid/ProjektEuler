#include<iostream>
#include<math.h>
using namespace std;

long HCF(long num1,long  num2)		//this function computes HCF of 2 numbers
{
	int temp;
	do{
		temp=num1%num2;
		num1=num2;
		num2=temp;
	}while(temp);
return num1;
}
int main(){

long a=1,b=1;
for(b=1;b<=20;b++)		//lcm=product/hcf
{
	a=a/HCF(a,b);		//divide first to prevent overflow
	a=a*b;
}
cout << "The LCM of First 20 is " << a << endl;
return 0;
}
