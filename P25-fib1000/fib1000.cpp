#include<iostream>
#include<math.h>

using namespace std;

int main(){
int add1[1000]={0},add2[1000]={0},sum[1000]={0},carry=0,i,j,k;
add1[0]=add2[0]=1;
long long cnt=2;
while(sum[999]==0){					

	for(j=0;j<1000;j++){	
		sum[j]=0;			///digitwise addition algorithm
		sum[j]=add1[j]+add2[j]+carry;
		carry=sum[j]/10;
		sum[j]=sum[j]%10;		
	}
	for(i=0;i<1000;i++){
		add1[i]=add2[i];
		add2[i]=sum[i];	
	}
	cnt++;
}

	//sum=sum+product[i];
	cout << cnt;
return 0;
}  
