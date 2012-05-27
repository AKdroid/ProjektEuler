 #include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
int length=0, temp=0, seedmax=1;
long long seed=1;
for(int i=2;i<1000000;i++){
	seed=i;
	temp=0;
	while(seed>1){
		if(seed%2==0)seed=seed/2;
		else seed=seed*3+1;
		temp++;
		if(seed==seedmax){
			temp=length+temp;
			break;
		}
	}
	if(temp>length){
		length=temp;
		seedmax=i;	
	}

}
cout << seedmax << endl << length ;
return 0;
}
