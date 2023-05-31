/****************************************************
Group: 11 
Section:S13
Members:   <Miguel>, <Angela Dominique> 
           <Ramos>, <Irish Jane> 
           <Villavicencio>, <Josh Dane> 
****************************************************/

#include <stdio.h>
#include <time.h>
#include "bubbleSort.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "mergeSort.h"
#include "sort5.h"
#include "generateData.h"
#include "sort6.h"
#include "timer.h"

/**
 * This function is used to generate the data that will be used in the sorting functions
 */
int main() 
{
  /* declaring the variables that will be used in the program. */
  int i;
  int n = 1024;
  int A[n];
  int srandom = 0;

  double FINALCOUNT = 0;
  double dCounter;
  double sum = 0;
  double avetime;

  // DECLARE STRUCT TIMESPEC
  struct timespec begin, end;

  
  /* A do while loop that will run until n is greater than 16384. */
  do
  {
    printf("\n\n-------- n = %d --------", n);
    //BUBBLE SORT ----------------------------------//
    printf("\n\nBubble Sort:");
    dCounter = 0;
    generateData(A, srandom);

   /* Getting the time before and after the bubbleSort function is called. */
    for (i = 0; i < 10; i++) 
    {
      begin = getTime();
      bubbleSort(A, n, &dCounter);
      sum = sum + dCounter;
      // GET END TIME
      end = getTime();
      // COMPUTE ELAPSED TIME
      double elapsed = getElapsed(begin, end);
      // ADD TO AVE TIME
      avetime += elapsed;   
    }

  /* Dividing the sum of the counter by 10. */
  FINALCOUNT = sum / 10;
  printf("\nAverage counter value: %lf\n", FINALCOUNT);

  // COMPUTE AVE TIME
  avetime = avetime / 10;
  printf("Average MET: %lf\n", avetime);
  

  //INSERTION SORT ----------------------------------//
  printf("\n\nInsertion Sort:");
  dCounter = 0;
  sum = 0;
  FINALCOUNT = 0;
  generateData(A, srandom);

    /* Getting the time before and after the insertionSort function is called. */
    for (i = 0; i < 10; i++) 
    {
      begin = getTime();
      insertionSort(A, n, &dCounter);   
      sum = sum + dCounter;
      // GET END TIME
      end = getTime();
      // COMPUTE ELAPSED TIME
      double elapsed = getElapsed(begin, end);
      // ADD TO AVE TIME
      avetime += elapsed;
    
    }

  FINALCOUNT = sum / 10;
  printf("\nAverage counter value: %lf\n", FINALCOUNT);

  // COMPUTE AVE TIME
  avetime = avetime / 10;
  printf("Average MET: %lf\n", avetime);
  

// SELECTION SORT ----------------------------------//
  printf("\n\nSelection sort: ");
  dCounter = 0;
  sum = 0;
  FINALCOUNT = 0;
  generateData(A, srandom);

  /* Getting the time before and after the selectionSort function is called. */
  for (i = 0; i < 10; i++) {
    begin = getTime();
    selectionSort(A, n, &dCounter);
    sum = sum + dCounter;
    // GET END TIME
    end = getTime();
    // COMPUTE ELAPSED TIME
    double elapsed = getElapsed(begin, end);
    // ADD TO AVE TIME
    avetime += elapsed;
    
  }

  FINALCOUNT = sum / 10;
  printf("\nAverage counter value: %lf\n", FINALCOUNT);

  // COMPUTE AVE TIME
  avetime = avetime / 10;
  printf("Average MET: %lf\n", avetime);

  //MERGE SORT ----------------------------------//
  printf("\n\nMerge sort:");
  dCounter = 0;
  sum = 0;
  FINALCOUNT = 0;
  generateData(A, srandom);

    /* Getting the time before and after the mergeSort function is called. */
    for (i = 0; i < 10; i++) 
    {
      begin = getTime();
      mergeSort(A, n, &dCounter);
      sum = sum + dCounter;
      // GET END TIME
      end = getTime();
      // COMPUTE ELAPSED TIME
      double elapsed = getElapsed(begin, end);
      // ADD TO AVE TIME
      avetime += elapsed;
  
    }

  FINALCOUNT = sum / 10;
  printf("\nAverage counter value: %lf\n", FINALCOUNT);

  // COMPUTE AVE TIME
  avetime = avetime / 10;
  printf("Average MET: %lf\n", avetime);

  //SORT 5 ----------------------------------//
  printf("\n\nsort5:");
  dCounter = 0;
  sum = 0;
  FINALCOUNT = 0;
  generateData(A, srandom);

    /* Getting the time before and after the sort5 function is called. */
    for (i = 0; i < 10; i++) 
    {
      begin = getTime();
      sort5(A, n, &dCounter);
      sum = sum + dCounter;
      // GET END TIME
      end = getTime();
      // COMPUTE ELAPSED TIME
      double elapsed = getElapsed(begin, end);
      // ADD TO AVE TIME
      avetime += elapsed;
      
    }

  FINALCOUNT = sum / 10;
  printf("\nAverage counter value: %lf\n", FINALCOUNT);
  // COMPUTE AVE TIME
  avetime = avetime / 10;
  printf("Average MET: %lf\n", avetime);
  
  // SORT6 ----------------------------------//
  /* Printing the average counter value and the average MET. */
  printf("\n\nsort6: ");
  dCounter = 0;
  sum = 0;
  FINALCOUNT = 0;
  generateData(A, srandom);

    /* Getting the time before and after the sort6 function is called. */
    for (i = 0; i < 10; i++) 
    {
      begin = getTime();
      sort6(A, n, &dCounter);  
      sum = sum + dCounter;
    
      // GET END TIME
      end = getTime();

      // COMPUTE ELAPSED TIME
      double elapsed = getElapsed(begin, end);
      // ADD TO AVE TIME
      avetime += elapsed;
      
    }

  FINALCOUNT = sum / 10;
  printf("\nAverage counter value: %lf\n", FINALCOUNT);

  //COMPUTE AVE TIME
  avetime = avetime / 10;
  printf("Average MET: %lf\n", avetime);
    
    n = n * 2;
  }while(n >! 16384);

  return 0;
}
