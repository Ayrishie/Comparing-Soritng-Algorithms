/****************************************************
REFERENCE

Author: GeeksforGeeks
Link: https://www.geeksforgeeks.org/insertion-sort/
****************************************************/


/* 
	You may declare additional functions here
*/


/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/


/*
	Sorts the array A using insertion sorting algorithm.

	@param int A[] 			array to be sorted
	@param int n			size of the array to be sorted
	@param double *dCounter	counter variable for critical parts of the code
*/
void insertionSort(int A[], int n, double *dCounter) 
{
	int i, 
        key, 
        j;

    for (i = 1; i < n; i++) 
    {
        key = A[i];
        j = i - 1;
       *dCounter+=1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && A[j] > key) 
        {
            A[j + 1] = A[j];
            j = j - 1;
            *dCounter+=1;
        }
        *dCounter+=1;
        A[j + 1] = key;
    }
    *dCounter+=1;
    
}
