#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
struct namevalue{
	char names[12];
	int value;
};
int main(){

struct namevalue nlist[5000];
int i,j;
FILE *fp=fopen("names.txt","r");
for(i=0;i<5000;i++){
	char c=fgetc(fp);
	if(c=='\"')
	{
		c=fgetc(fp);
		for(j=0;c!='\"';j++){
			nlist[i].names[j]=c;
			c=fgetc(fp);
		}
	nlist[i].names[j]=0;
	}
	c=fgetc(fp);
}
fclose(fp);
cout<<nlist[4999].names;
return 0;
} 
