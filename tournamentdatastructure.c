#include <stdio.h>
main()
{
	int tourn[100], i, n, m;
	/* READ */
	printf(" Give n : \n");
	scanf("%d", &n);
	printf("\n n = %d \n", n);
	for (i = n; i<=2*n-1 ; i++) /*Store in an array from locations n to 2n-1 */
	    printf("Enter the elements: \n");
	    scanf("%d", &tourn[i]);
	
 
/* COMPUTE TOURNAMENT */
for (i = 2*n-2; i>1 ; i = i-2)
tounr[i/2] = maxi(tourn[i], tourn[i+1]);

for (i = 1; i<=2*n-1; i++)
   printf("%d ", tourn[i]);
   printf("\n");
}

int maxi(int i, int j)
{  if (i > j) return(i);
   else  return(j);
}
 
