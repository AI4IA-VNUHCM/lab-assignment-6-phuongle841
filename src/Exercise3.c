/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int n=strlen(str);
	int Index;
	int Max=1;
	int MaxPosition=0;
	int Min=1;
	int MinPosition=0;
	int i=0;
	for (int i = 0; i < n; i=i+Index)
		{
			if (str[i]!=' ')
			{	
				Index=1;
				for (int j = i; str[j] !=0; j++)
				{
					Index=Index+1;
				}
				if (Index>Max)
				{
					MaxPosition=i;
					Max=Index;
				}
				
				
			}
			
		}
	printf("this is the longest str %d",Max);	
	
	
	
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
//gcc .\src\Exercise3.c -o .\bin\exe3.exe
//.\bin\exe3.exe "This is a string with shortest and longest word"