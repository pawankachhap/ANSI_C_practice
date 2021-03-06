#include<stdio.h>

float convert(float);

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while(fahr <= upper)
	{
		celsius = convert(fahr);
		printf("%3.0f %6.1f\n",fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}

float convert(float frnht)
{
	float celsius_temp;
	celsius_temp = (5.0/9.0) * (frnht - 32.0);

	return celsius_temp;
}
