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
int Tam=0;
int n=strlen(str);
int MaxString=0;
int VitriStringmax;
int MinString=n;
int VitriStringmin;
for (int i = 0; i < n; i++)
{
	if (str[i]!=' ')
	{
		Tam=Tam+1;
	}
	else
	{
		if (Tam>MaxString)
		{
			MaxString=Tam;
			VitriStringmax=i-Tam;
			Tam=0;
		}	
		else
		{
			Tam=0;
		}
		
	}	
}
Tam=0;
for (int i = 0; i < n; i++)
{
	if (str[i]!=' ')
	{
		Tam=Tam+1;
	}
	else
	{
		if (Tam<MinString)
		{
			MinString=Tam;
			VitriStringmin=i-Tam;
			Tam=0;
		}	
		else
		{
			Tam=0;
		}
		
	}	
}
printf("Shortest word: ");
for (int i = VitriStringmin; i <= VitriStringmin+ MinString; i++)
{
	printf("%c",str[i]);
}
printf("\n");
printf("Longest word: ");
for (int i = VitriStringmax; i < VitriStringmax+ MaxString; i++)
{
	printf("%c",str[i]);
}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
//gcc .\src\Exercise3.c -o .\bin\exe3.exe
//.\bin\exe3.exe "This is a string with shortest and longest word"