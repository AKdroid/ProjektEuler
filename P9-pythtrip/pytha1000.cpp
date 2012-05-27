#include<iostream>
#include<math.h>

using namespace std;

int main()
{
long a,b,c=0,temp=0;
for(a=1;a<1000;a++)
{
	for(b=1;b<=1000;b++)
	{
		c=(a*a+b*b);
		temp=1000-a-b;
		if(temp*temp==c)goto exit;
			
	}
}
exit:
cout <<a*b*temp<<endl<<a<<endl<<b<<endl;
return 0;

} 
