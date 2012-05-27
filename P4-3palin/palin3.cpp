#include<iostream>
#include<math.h>
using namespace std;
int ispalindrome(int num){			//returns 1 if true else false
	
int digits[6]={0},oddflag=0,temp=num;
for(int i=5;i>=0;i--)				//decompose into digits
{
	int power=pow(10,i);			
	digits[i]=num/power;
	num=num%power;
}
if(digits[5]==0){				//check mirrorwise for both odd and even 5digit or six digit
	for(int i=0;i<2;i++){
		if(digits[i]!=digits[4-i])return 0;	
	}	
	return 1;
}
else{
	for(int i=0;i<=2;i++){
		if(digits[i]!=digits[5-i])return 0;	
	}	
	return 1;

}
}
int main(){
int max=0;
int a,b;
for(a=100;a<1000;a++)
{
	for(b=100;b<1000;b++)
	{
		if(ispalindrome(a*b) && a*b >max){
			max=a*b;		
		}
	}
}
cout << "The largest palindrome is " << max;
return 0;
}
