#include<iostream>

using namespace std;

int main(){
int a,b,c,d,e,f,g,h,cnt=1;
a=0;
for(b=0;b<=2;b++)
for(c=0;c<=4;c++)
for(d=0;d<=10;d++)
for(e=0;a<=20;e++)
for(f=0;f<=40;f++)
for(g=0;g<=100;g++)
for(h=0;h<=200;h++)
{
	int total=h+g*2+f*5+e*10+d*20+50*c+100*b+a*200;
	if(total==200)cnt++;
	if(total>200)break;
}
cout<<cnt;
return 0;
} 
