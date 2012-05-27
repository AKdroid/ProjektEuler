#include<iostream>
#include<math.h>
#include<stdio.h>
#define LEN 100
using namespace std;

int main()
{
FILE *fp=fopen("triangle2.txt","r");
int triangle[LEN][LEN]={0},i=0,j=0;
for(i=0;i<LEN;i++){
	for(j=0;j<=i;j++)
	{
		fscanf(fp,"%d",&triangle[i][j]);
	}
}
for(i=0;i<LEN;i++){
	for(j=0;j<=i;j++)
	{
		cout<<triangle[i][j]<<",";
	}cout<<endl;
}


for(i=LEN-2;i>=0;i--)
	for(j=0;j<=i;j++)
	{
		int a=triangle[i][j]+triangle[i+1][j];
		int b=triangle[i][j]+triangle[i+1][j+1];
		triangle[i][j]=(a>b)?a:b;
	}
fclose(fp);
for(i=0;i<LEN;i++){
	for(j=0;j<=i;j++)
	{
		cout<<triangle[i][j]<<",";
	}cout<<endl;
}

cout<<triangle[0][0];
return 0;
} 
