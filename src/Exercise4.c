/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here
	for (int i = 0; i < strlen(str); i++)
	{
		printf("%c",str[i]);
		if (str[i]==' '&&str[i+1]==' '||str[i]==' '&&str[i+1]==' '&&str[i+2]==' ')
		{
			i=i+1;
		}	
	}

	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}
//gcc .\src\Exercise4.c -o .\bin\exe4.exe
//.\bin\exe4.exe "  this  is an   unformatted  string "