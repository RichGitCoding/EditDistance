#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "edit_distance.h"

/*  Suggestions
- When you work with 2D arrays, be careful. Either manage the memory yourself, or
work with local 2D arrays. Note C99 allows parameters as array sizes as long as 
they are declared before the array in the parameter list. See: 
https://www.geeksforgeeks.org/pass-2d-array-parameter-c/

Worst case time complexity to compute the edit distance from T test words
 to D dictionary words where all words have length MaxLen:
Student answer:  Theta(............)

*/

/* You can write helper functions here */

void printTable(int Dist[7][7], char * first_string, char * second_string,int firstLen,int secondLen)
{
	int i,j;
	//first fill in the names in the table 
	//find out how many letters and then add two
	//print nothing for Dist[0][0],  Dist[0][1], and Dist[1][0]
	//printf("printing...");
	for(i = 0; i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("%d" , Dist[i][j]);
			
		}
	}
}


int edit_distance(char * first_string, char * second_string, int print_table){
	
	int firstLen = 5;//strlen(first_string); 
	int secondLen = 5;//strlen(second_string);
	//need to make array big enough 
	//printf("sdasdfS");
	//int Dist[firstLen][secondLen];
	int Dist[7][7];//5*5 for numbers
	//fill up with 0
	
	int i, j;
	for(i =0 ; i<7; i++)
	{
		for(j = 0; j<7; j++)
		{
			//clear the spaces for the names and numbers
			if(i == 0 &&  j == 0)
			{
				Dist[0][0] = '-';
			}
			else if(i == 0 && j == 1)
			{
				Dist[0][1] = '-';
			}
			else if(i == 1 && j == 0 )
			{
				Dist[1][0] = '-';
			}
			else
			{
				Dist[i][j] = 0;
			}
		}
	}
	
	printTable(Dist, first_string, second_string, firstLen, secondLen);
	/*
	if(print_table == 1)
	{
		printTable(Dist[7][7], first_string, second_string, firstLen, secondLen);
	}
	*/
	return -1;  // replace this line with your code
}
	  
	  
void spellcheck(char * dictname, char * testname){	
	// Write your code here
}

