#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int pfs[100]={0};
int getnextprime(int current){
	if(current==2)return 3;
	else if(current==3)return 5;
	else{
	while(1){
		current=current+2;
		int flag=0;
		for(int num=2;num<=sqrt(current);num++){
		if(current%num==0){flag=1;break;}				
		}
		if(flag==0)break;;
	}
	}
	return current;
} 
void clear(){
for(int i=0;i<100;i++)pfs[i]=0;
}
int decompose (long long num){
	clear();
	int product=1,divisor=2,cnt=0,pointer=0;
	while(num>1){
		if(num%divisor==0)
		{
			cnt++;
			num=num/divisor;
		}
		else
		{	
			if(cnt!=0)	
			{
			pfs[pointer]=cnt;
			cnt=0;
			pointer++;
			}
			divisor=getnextprime(divisor);
			//cout << divisor;
			//pointer++;
		}
	}
	pfs[pointer]=cnt;
	for(int i=0;i<=pointer;i++){
	product=product*(pfs[i]+1);	
	}
	return product;
}
int main(){

int cnt=1,seed=2;
long long triangle=0;
cout << decompose(28);

for(cnt=100;cnt<100000;cnt++){
	
	triangle=cnt*(cnt+1)/2;
	int prod=decompose(triangle);
	if(prod>500){
		cout << cnt << endl <<triangle << endl;break;	
	}	
}

return 0;
}
