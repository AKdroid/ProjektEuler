#include<iostream>
#include<math.h>

using namespace std;

long factorial(int a)
{
	int product =1;
	for(int i=1;i<=a;i++)
		product=product*i;
	return product;
}

int main(){
//the answer is given by 2n C n where n= grid length
double product =1;
for(int i=1;i<=20;i++)
{
	product=product*(20+i)/(i);
}
cout << (long long) product;
return 0;
} 
