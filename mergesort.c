#include <stdio.h>
main()
{
   int data[100], i, j, n, temp;
/* INPUT */
   printf("Give n:");
   scanf("%d", &n);
   printf(" n = %d \n", n);
   for (i = 0; i < n; i++)
     scanf("%d", data+i);
     printf(" \n Numbers read are: ");
   for (i=0;i<n; i++)
     printf("%d ", *(data+i));
     printf(" \n");

/* CALL */
mergesort(data, 0, n-1);

/* PRINT RESULTS */
  printf(" \n Sorted numbers are: ");
  for (i=0; i<n; i++)  printf("%d ", data[i]);
  printf(" \n");
}

mergesort(a, i, j) /* merge sort routine */
int a[], i, j; 
{
  int mid;
  printf(" Entered with i = %d, j = %d \n", i, j);
  if (i >= j)  return;
  mid = (i + j)/2;
  mergesort(a, i, mid);
  mergesort(a, mid +1, j);
  merge(a, i, j);
}

merge (a, i, j)  /* takes in parameters as a, 
int a[], i, j; 
{
int k, b[100], mid, l, start; /* b is temp array to store elements during merge sorting, l is a temp variable*/
start = i;
mid = (i+j)/2;
k = mid +1;
l = i;

/* FORM ARRAY b - array b will start from l */
while (i<=mid && k <=j)
 if (a[i] >= a[k])
     b[l++] = a[i++];
 else
     b[l++] = a[k++];

 if (i > mid)
    for( ; k <=j ; )  b[l++] = a[k++];
 else
   if (k > j)
   for (; i<=mid;) b[l++] = a[i++];  

/* copy back after sorting, from array b to array a */

 for (l = start; l <=j; l++)
    a[l] = b[l];
}



