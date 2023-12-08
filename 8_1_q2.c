/*
Q.2 Write a Program to find the average of a 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 12
a[1] = 42
a[2] = 18
a[3] = 50
a[4] = 26
*/
#include<stdio.h>

void main(){
	int i,n,A;
	int a[100];
	
	printf("Enter Array Size :- ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter a[%d]:- ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		printf("%d\n",a[i]);
		A+=a[i];
	}
	printf("Average of Array %d",A/n);
}
