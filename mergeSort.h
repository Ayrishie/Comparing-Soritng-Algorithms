/****************************************************
REFERENCE

Author:Faizan Parvez
Link:https://www.mygreatlearning.com/blog/merge-sort/
****************************************************/


/* 
	You may declare additional functions here
*/
void merge(int A[], int left[], int lSize, int right[], int rSize, double *dCounter);
void mergeSort(int A[], int n, double *dCounter);

/****************************************************
YOU ARE NOT ALLOWED TO MODIFY THE FUNCTION PROTOTYPES
****************************************************/


/*
	Sorts the array A using merge sorting algorithm.

	@param int A[] 			array to be sorted
	@param int n			size of the array to be sorted
	@param double *dCounter	counter variable for critical parts of the code
*/
void mergeSort(int A[], int n, double *dCounter) 
{
  if (n < 2) return;
  int mid = n / 2;
  int left[mid];
  int right[n - mid];
  int i;
  int j = 0;
  
  for(i = 0; i < mid; i++) 
  {
    left[i] = A[i];
    (*dCounter)++;
  }
  (*dCounter)++;
  for (j = mid; j < n; j++) 
  {
    right[j - mid] = A[j];
    (*dCounter)++;
  }
  (*dCounter)++;

  mergeSort(left, mid, dCounter);
  mergeSort(right, n - mid, dCounter);
  merge(A, left, mid, right, n - mid, dCounter);
}

void merge(int A[], int left[], int lSize, int right[], int rSize, double *dCounter) 
{
  int i = 0, j = 0, k = 0;
  while (i < lSize && j < rSize) 
  {
    if (left[i] <= right[j]) 
    {
      A[k++] = left[i++];
      (*dCounter)++;
    } 
    else 
    {
      A[k++] = right[j++];
      (*dCounter)++;
    }
  }
  while (i < lSize) 
  {
    A[k++] = left[i++];
    (*dCounter)++;
  }
  while (j < rSize) 
  {
    A[k++] = right[j++];
    (*dCounter)++;
  }
}

