#include <stdio.h>
main()
{
int tourn[100], n, i;
printf("Give n: \n");
scanf("%d", &n);
printf("\n n = %d \n", n);
for (i = n; i <= 2*n-1; i++) /* Read fromindex n to 2n-1 */
   scanf("%d", &tourn[i]);

buildtourn(tourn, n); /* pass name of array and no. of elmts in it */

printf("\n MAX = %d \n", tourn[1]); /* tourn[1] contains the largest element*/
printf("Next Max = %d \n", nextmax(tourn, n)); /* pass tournament and base elements */
{

buildtourn(tourn, n)
int tourn[], n;
{
int i;
for (i= 2*n-2; i > 1; i = i-2)
tourn[i/2] = maxi(tourn[i], tourn[i+1]);
}

int nextmax(tourn, n)
int tourn[], n;
{
int i=2, next;

/* DOWNWARDS TRAVERSAL */
next = mini(tourn[2], tourn[3]);
while(i<= 2*n-1) {
if (tourn[i] > tourn[i+1]) {
next = maxi(tourn[i+1], next);
i= 2*i; }
else {
next = maxi(tourn[i], next);
i = 2*(i+1); }
}
return(next);
}
