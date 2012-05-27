#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){
int grid[20][20];
FILE *fp=fopen("gridin.txt","r");

int i,j,max=0,product,k;

for(i=0;i<20;i++)
{
	for(j=0;j<20;j++){
		fscanf(fp,"%d",&grid[i][j]);
	}
}
for(i=0;i<17;i++){
	
	for(j=0;j<20;j++){
		product=1;
		for(k=0;k<4;k++){	
	 	product=product*grid[i+k][j];
		if(product>max) max=product;	}
	}
}
for(i=0;i<20;i++){
	
	for(j=0;j<17;j++){
		product=1;
		for(k=0;k<4;k++){	
	 	product=product*grid[i][j+k];
		if(product>max) max = product;	}
	}
}
for(i=0;i<17;i++){
	
	for(j=0;j<17;j++){
		product=1;
		for(k=0;k<4;k++){	
	 	product=product*grid[i+k][j+k];
		if(product>max) max=product;	}
	}
}
for(i=19;i>=4;i--){
	
	for(j=0;j<20;j++){
		product=1;
		for(k=0;k<4;k++){	
	 	product=product*grid[i-k][j+k];
		if(product>max) max=product;	}
	}
}
for(i=0;i<20;i++)
{
	for(j=0;j<20;j++){
		printf("%d",grid[i][j]);
	}
}
cout <<  endl<<max <<endl;
fclose(fp);
return 0;
} 
