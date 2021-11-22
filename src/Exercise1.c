/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
	int a,b,c,d;
	a= floor(n/1000);
	
	switch (a)
	{
	case 1:
		printf(" one thousand ");
		break;
	case 2:
		printf(" two thousand ");
		break;
	case 3:
		printf(" three thousand ");
		break;
	case 4:
		printf(" four thousand ");
		break;
	case 5:
		printf(" five thousand ");
		break;
	case 6:
		printf(" six thousand ");
		break;
	case 7:
		printf(" seven thousand ");
		break;	
	case 8:
		printf(" eight thousand ");
		break;
	case 9:
		printf(" nine thousand ");
		break;					
	default:
	printf(" ");
		break;
	}
	b=(n-1000*a)/100;
	switch (b)
	{
	case 1:
		printf("one hundred ");
		break;
	case 2:
		printf("two hundred ");
		break;
	case 3:
		printf("three hundred ");
		break;
	case 4:
		printf("four hundred ");
		break;
	case 5:
		printf("five hundred ");
		break;
	case 6:
		printf("six hundred ");
		break;
	case 7:
		printf("seven hundred ");
		break;	
	case 8:
		printf("eight hundred ");
		break;
	case 9:
		printf("nine hundred ");
		break;					
	default:
	printf(" ");
		break;
	}
	c=(n-1000*a-b*100)/10;
	if (c!=1)
	{
	switch (c)
	{
	case 2:
		printf("twenty ");
		break;
	case 3:
		printf("thirty ");
		break;
	case 4:
		printf("fourty ");
		break;
	case 5:
		printf("fifty ");
		break;
	case 6:
		printf("sixty ");
		break;
	case 7:
		printf("seventy ");
		break;	
	case 8:
		printf("eighty ");
		break;
	case 9:
		printf("ninety ");
		break;					
	default:
	printf(" ");
		break;
	}
	d=n-1000*a-b*100-c*10;
	switch (d)
	{
	case 1:
		printf("one ");
		break;
	case 2:
		printf("two ");
		break;
	case 3:
		printf("three ");
		break;
	case 4:
		printf("four ");
		break;
	case 5:
		printf("five ");
		break;
	case 6:
		printf("six ");
		break;
	case 7:
		printf("seven ");
		break;	
	case 8:
		printf("eight ");
		break;
	case 9:
		printf("nine ");
		break;					
	default:
	printf(" ");
		break;
	}
	}
	else
	{
		d=n-1000*a-b*100-c*10;
	switch (d)
	{
	case 1:
		printf("eleven");
		break;
	case 2:
		printf("twelve");
		break;
	case 3:
		printf("thirteen");
		break;
	case 4:
		printf("fourteen");
		break;
	case 5:
		printf("fifteen ");
		break;
	case 6:
		printf("sixteen ");
		break;
	case 7:
		printf("seventeen ");
		break;	
	case 8:
		printf("eighteen ");
		break;
	case 9:
		printf("nineteen ");
		break;					
	default:
	printf(" ");
		break;
	}
	}
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
//gcc .\src\Exercise1.c -o .\bin\exe1.exe
//.\bin\exe1.exe 1234