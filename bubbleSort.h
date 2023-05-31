/****************************************************
REFERENCE

Author:GeeksforGeeks
Link:https://www.geeksforgeeks.org/bubble-sort/
****************************************************/


/* 
	You may declare additional functions here
*/


/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/


/*
	Sorts the array A using bubble sorting algorithm.

	@param int A[] 			array to be sorted
	@param int n			size of the array to be sorted
	@param double *dCounter	counter variable for critical parts of the code
*/
void bubbleSort(int A[], int n, double *dCounter) 
{
  int i, j, temp = 0;
    for (i = 0; i < n - 1; i++){
      *dCounter += 1; 
	    for (j = 0; j < n - i - 1; j++)
		{
          *dCounter += 1;
          if (A[j] > A[j + 1])
		  {
			temp = A[j];
			A[j] = A[j+1];
			A[j+1] = temp;
             
		   }
      	}
		*dCounter+=1;
	 }
    *dCounter += 1; 
}

