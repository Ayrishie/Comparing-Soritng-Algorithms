/****************************************************
REFERENCE

Author: GeeksforGeeks
Link: https://www.geeksforgeeks.org/selection-sort/
****************************************************/


/* 
	You may declare additional functions here
*/

//function prototype
void swap(int *xp, int *yp);
void selectionSort(int A[], int n, double *dCounter);

//A function that swaps the values of two variables.
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/

/*
	Sorts the array A using selection sorting algorithm.

	@param int A[] 			array to be sorted
	@param int n			size of the array to be sorted
	@param double *dCounter	counter variable for critical parts of the code
*/
void selectionSort(int A[], int n, double *dCounter) // dCounter is missing
{
    int i, 
		j, 
		min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
                if (A[j] < A[min_idx])
                {
                    min_idx = j;
                    
                } 
                *dCounter+=1;  
        }
        *dCounter+=1;
        // Swap the found minimum element with the first element
           if(min_idx != i)
		   {
				swap(&A[min_idx], &A[i]);				
		   }
            
        *dCounter+=1;
    }
    *dCounter+=1;
}
