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

long num=5;

long k=1,cnt=2;

while(cnt<10001){		//all prime nos can be expressed as 6k + 1 or 6k -1 only for improving efficiency. 
	num=6*k-1;
	if(isprime(num))cnt++;
	
	if(cnt==10001)break;
	num=6*k+1;
	if(isprime(num))cnt++;
	k++;
}
cout << "The 10001 prime number is " << num << endl;
return 0;
} 
