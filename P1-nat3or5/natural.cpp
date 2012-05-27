#include<iostream>

int main(){

long sum=0,num;	//sum initialized to 0
for(num=1;num<1000;num++){			//less than 1000 required
	if(num%3==0 || num%5 ==0){                // if divisible by 3 or 5 then add to sum
		sum=sum+num;	
	}
}
std::cout << "sum = "<<sum<<std::endl;  //print sum
return 0;
} 
