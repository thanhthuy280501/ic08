//*******************************************************************
// This is the sorting algorithm.  You should not have
// to modify it in any way.  It is an insertion sort.
//
// How you invoke it is as follows (in main):
// 
//  sort(a,count);	// Shows how sort should be called.
//			// count is the number of values stored
//			// a is an array of Credit class instances.
//*******************************************************************
void sort(Credit A[], int count) {
  int i, j;
  for (i = 1; i < count; i++)
    for (j = i; (j > 0) && (A[j] > A[j-1]); j--)
      swap(A[j],A[j-1]);
}

