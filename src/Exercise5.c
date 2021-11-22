/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str){
	//Your codes here
	int n=6;
	int Check;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == str[n-i-1]-1 || str[i] == str[n-i-1]-2)
 		{
			Check=0;
			break;
		}
		else
		{
			Check=1;
		}
		
		
	}
	if (Check==0)
	{
		printf("Valid!");
	}
	else
	{
		printf("Invalid!");
	}
	
	
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
//gcc .\src\Exercise5.c -o .\bin\exe5.exe
//.\bin\exe5.exe "{([])}" 
