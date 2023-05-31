/****************************************************
REFERENCE

Author: GeeksforGeeks
Link: https://www.geeksforgeeks.org/heap-sort/
****************************************************/


void swap1(int* a, int* b)
{
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int N, int i)
{
    // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
 
    // left = 2*i + 1
    int left = 2 * i + 1;
 
    // right = 2*i + 2
    int right = 2 * i + 2;
 
    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])
        largest = left;
 
    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])
        largest = right;
 
    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
 
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
    
// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
}



/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/


/*
	Sorts the array A using <fill this> sorting algorithm.

	@param int A[] 			array to be sorted
	@param int n			size of the array to be sorted
	@param double *dCounter	counter variable for critical parts of the code
*/

void sort5(int A[], int n, double *dCounter) 
{
	int i;
    // Build max heap
    for (i = n / 2 - 1; i >= 0; i--)
    {   
       heapify(A, n, i);
      *dCounter+=1;

    }
    *dCounter+=1;
    // Heap sort
    for (i = n - 1; i >= 0; i--) 
    {
        swap(&A[0], &A[i]);
        // Heapify root element to get highest element at
        // root again
        heapify(A, i, 0);
      *dCounter+=1;
    }
    *dCounter+=1;
}