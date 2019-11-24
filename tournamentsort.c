#include <stdio.h>
main()
{
  int tourn[100], n, i, min;

/* READ n elements and place from n to 2n-1 */
printf("Give n: \n");
scanf("%d", &n);
printf("\n n = %d \n", n);
for (i = n; i <= 2*n-1; i++) /* Read from index n to 2n-1 */
   scanf("%d", &tourn[i]);

buildtourn(tourn, n); /* pass name of array and no. of elmts in it */
min = minval(tourn, n) - 1; /* LOW = (min-1)*/

/* SORTING */
printf("\n Sorted items are: \n"); 
for (i =1; i <=n; i++){
printf("%d ", tourn[1]); /*print tourn[1] - tourn[1] contains largest element */
getnext(tourn, n, min); /* let's say minimum element is 1, define a value LOW initialized to MIN-1 */
}
printf(" \n");
}

buildtourn(tourn, n) /* fill the array with the max of the pairwise comparisons */
int tourn[], n;
{
int i;
for (i= 2*n-2; i > 1; i = i-2)
tourn[i/2] = maxi(tourn[i], tourn[i+1]);
}

int getnext(tourn, n, min)
int tourn[], n, min;
{
int i=2, next;

/* DOWNWARDS TRAVERSAL- part 1 of getnext function- compare 2 elts and the  larger of the 2 elts is assigned the lowest i.e. MIN */
while(i<= 2*n-1) {
if (tourn[i] > tourn[i+1]) {
tourn[i] = min; /* e.g. replace the largest element by 0, i.e. MIN */
i= 2*i; /*   }
else {
tourn[i+1] = min;
i = 2*(i+1); }
}

/* UPWARDS RECOMPUTATION - part 2 of getnext function - recompute the values and redefine the tournament  */
for(i = i/2; i > 1; i = i/2) {
  if (i%2 == 0)
	tourn[i/2] = maxi(tourn[i], tourn[i+1]);
  else
	tourn[i/2] = maxi(tourn[i], tourn [i-1]);
}
/* This algorithm takes (n-1) + 2(n-1)(log2)n computaiton time */ 
