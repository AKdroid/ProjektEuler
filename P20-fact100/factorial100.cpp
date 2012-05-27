#include<iostream>
#include<math.h>

using namespace std;

int main(){
int product[170]={0},carry=0,i,j,k,sum=0;
product[0]=1;

for(i=1;i<=100;i++){					

	for(j=0;j<170;j++){				///digitwise multiplication algorithm
		product[j]=product[j]*i+carry;
		carry=product[j]/10;
		product[j]=product[j]%10;		
	}
}
k=169;
while(product[k]==0&&k>0)k--;
for(i=k;i>=0;i--)
	sum=sum+product[i];
	cout << sum;
return 0;
}  
