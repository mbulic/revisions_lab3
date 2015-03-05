/** lab3_main.c: Implements a front end for lab3_lib.c.
*
*
* Name: Jason Ho
* Email: ho3@purdue.edu
* Course: CNIT 315
* Lab batch: 315-008
* Lab assignment: 3
* Date: 2/25/2015
*
* Collaborators:
* -Cyrus Suttaria
*/

#include <time.h> //for time()
#include <stdio.h>
#include "lab3_lib.h"


int main()
{

int num_choice;
int addValue;
int location; //need to initialize location
int size=0; /* Set this to something like 2 (so you dont get an error with 0 ), it will give the array some space but it should be too big, can reallocate space later */
int array_temp[0]; // int *array_temp;  use this for malloc instead
int binaryValue;
int num_elements = 0; // we will want a count of how many elements the user put in since size will be off by two
int *point;


point = (int*) malloc( size * sizeof(int));

do
	{
  /*
  * You don't have to ask for the size of the array, set it to something temporary 
  * and reallocate as you go
  */
	//Determine the size of the array
  //	printf("Please define the size of the array.");
	//scanf("%d", &size);
	
	
	// -----------------------Prints the menu.--------------------------------
	
	printf("\n");
	printf("Welcome to the Lab 3.5 Sort and Search\n");
	printf("Please choose an option.\n");
	printf("1.) Add a new Value\n");
	printf("2.) Sort the Array\n");
	printf("3.) Search for a particular value\n");
	printf("4.) Exit\n");
	
	scanf("%d", &num_choice);

  size++;

switch(num_choice)
{
	case 1:
	
		
  	array_temp = (int*) malloc( size * sizeof(int));  // here is were you would use realloc
		
	  deep_copy_array(point, array_temp, size); // dont do this
	  free(point);// and not this 
	  
	  if(array_temp != NULL) {
	    point = array_temp;
		  num_elements++;  // keeping track of how many elements are needed
		  // Add a new value.
		  printf("Please input a value.");
		  scanf("%d", &addValue);
		  point[num_elements - 1] = addValue; // add the value to the array
		}
		else
		{
		  // remember to free up space for array
			printf("Error! The Memory is not allocated.");
			return 1;
		
		}
		
/*		point = (int*) realloc (point, size * sizeof(int));
		
		if (point == NULL)
		{
			printf("Error reallocating memory!");
			//Free the initial memory block.
			free (point);
			
			return 2;

		}
		free (point);
		
	*/	
	
	break;
	
	case 2:
	
		//Insertion sort here.
		
    array_temp = (int*) malloc(size * sizeof(int));
		
		insertion_sort( point, size, array_temp);
		
		for( i = 0; i < size; i++)
		{
		
		  printf("%d\n",array_temp[i]);
		
		}
		
	
	break;
	
	case 3:
	
	  printf("Please input a value to search.");
	  scanf("%d", &binaryValue);
	
		// Binary search here.
		int binary_search(int point, int size, int binaryValue, int* location); // binary_search(point,size, binaryValue, &location);
		
		//printf("The value you are searching for is here: &d", location);
		
		return 3
	
	break;
	
	case 4:
	
	//Exit
	
	return 0;
	break;

}

	}while(1 == 1)
	
	//free up the arrays
	
	/*
	*I think you are in the right track just need to make a few adjustments
	*/
	

}
