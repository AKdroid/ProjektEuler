#include<iostream>
#include<math.h>

using namespace std;
int isleap(int num){
	if(num%100==0 && num%400 == 1)
	return 1;
	if(num%4==0)return 1;
return 0;
}
int main(){

int seed=6,sundays=0,i=0,j=0;
int no_of_days[]={31,31,28,31,30,31,30,31,31,30,31,30}; //start from dec 1900 to dec 2000
for(i=1901;i<=2000;i++){
	no_of_days[2]=28+isleap(i);
	for(j=0;j<12;j++){
		seed=seed+no_of_days[j];
		if(seed%7==0)sundays++;
	}
}
cout<<sundays;

return 0;
} 
