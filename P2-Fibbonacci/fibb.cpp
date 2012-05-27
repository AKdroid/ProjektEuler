#include<iostream>


int main(){

long sum=2,a=1,b=2,c=0;	//start with a=1,b=2
while(c<4000000){
	c=a+b;		//sum of consecutive numbers in series
	if(c%2==0){
	sum=sum+c;	//add to sum only if c is even
	}		//sum initialised to 2 so as to include 2 in the sum which this loop doesn't.
	a=b;		//new a = b
	b=c;		//new b = c

}
std::cout<<"sum="<<sum<<std::endl;
return 0;
} 
