//Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>
/* print Fahrenheit-Celsius table
for celsius = 0, 20, ..., 300; floating-point version */
main()
{
float fahr, celsius;
float lower, upper, step;
lower = 0; /* lower limit of temperatuire scale */
upper = 100; /* upper limit */
step = 20; /* step size */
celsius = lower;
while (celsius <= upper) {
fahr = ((5.0/9.0) * celsius)+32.0;
printf("%3.0f %6.1f\n", celsius, fahr);
celsius = celsius + step;
}
}
