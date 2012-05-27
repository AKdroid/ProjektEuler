#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){

int number[1000]={0},i,max=0;
FILE *fp=fopen("number","r");
for(i=0;i<1000;i++){
fscanf(fp,"%1d",&number[i]);
}
for(i=0;i<1000-4;i++){
	int prod=number[i]*number[i+1]*number[i+2]*number[i+3]*number[i+4];
	if(prod>max) max=prod;
}
cout << max << endl;
fclose(fp);
return 0;
} 
