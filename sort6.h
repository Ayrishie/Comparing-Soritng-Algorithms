/****************************************************
REFERENCE 

Author: programiz
Link: https://www.programiz.com/dsa/quick-sort
****************************************************/


/* 
	You may declare additional functions here
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void quickSort(int array[], int low, int high, double *dCounter);
void sort6swap(int *a, int *b);
int partition(int array[], int low, int high, double *dCounter);

/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/

/*
	Sorts the array A using <fill this> sorting algorithm.

	@param int A[] 			array to be sorted
	@param int n			size of the array to be sorted
	@param double *dCounter	counter variable for critical parts of the code
*/

void sort6(int A[], int n, double *dCounter)
{

  quickSort(A, 0, n - 1, dCounter);
  
}


// function to sort6swap elements
void sort6swap(int *a, int *b) 
{
  int t = 0;
  t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high, double *dCounter) 
{
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  int j;

  for (j = low; j < high; j++) 
  {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // sort6swap it with the greater element pointed by i
      i++;
      
      // sort6swap element at i with element at j
      sort6swap(&array[i], &array[j]);
    }
    *dCounter+=1;
  }
  *dCounter+=1;

  // sort6swap the pivot element with the greater element at i
  sort6swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high, double *dCounter) 
{
  if (low < high){
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high, dCounter);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1, dCounter);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high, dCounter);
   
    *dCounter+=1;
  }
}

