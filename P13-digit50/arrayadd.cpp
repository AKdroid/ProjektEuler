#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){

int num[100][50],sum[51]={0};
FILE *fp=fopen("numlist.txt","r");
int i,j;
for(i=0;i<100;i++)
for(j=49;j>=0;j--)
	fscanf(fp,"%1d",&num[i][j]);
int carry=0,sum1=0;
//cout << num[4][4];
for(i=0;i<50;i++)
{
	for(j=0;j<100;j++)
	{
		sum[i]=sum[i]+num[j][i];
	}
	
	sum[i]=sum[i]+carry;
	cout<<sum[i]<<endl;
	carry=sum[i]/10;
	sum[i]=sum[i]%10;
	cout<<sum[i]<<"+"<<carry<<endl;
}
sum[50]=carry;

for(j=50;j>=0;j--)
	cout<<sum[j];
cout<<carry<<endl;
fclose(fp);
return 0;

} 
