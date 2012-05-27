#include<iostream>
#include<math.h>

using namespace std;

int main(){
int product[350]={0},carry=0,i,j,k,sum=0;
product[0]=1;

for(i=1;i<=1000;i++){					

	for(j=0;j<350;j++){				///digitwise multiplication algorithm
		product[j]=product[j]*2+carry;
		carry=product[j]/10;
		product[j]=product[j]%10;		
	}
}
k=349;
while(product[k]==0&&k>0)k--;
for(i=k;i>=0;i--)
	sum=sum+product[i];
	cout << sum;
return 0;
} 
