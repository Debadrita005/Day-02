#include<stdio.h>
int main()
{
	float c1,c2,f1,f2;
	printf("enter the tempperature in celcius:");
	scanf("%f",&c1);
	f1=((c1*9/5)+32);
	printf("enter the temperature in fahrenheit:");
	scanf("%f",&f2);
	c2=((f2-32)*5/9);
	printf("%f %f",f1,c2);
	return 0;
}
