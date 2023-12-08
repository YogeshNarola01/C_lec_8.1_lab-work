/*
Q.1 Write a Program to find the length of a 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 3
a[1] = 7
a[2] = 1
a[3] = 8
a[4] = 6

*/
#include<stdio.h>

void main(){
	int i,n;
	int a[100000];
	
	printf("Enter Array Size :- ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter a[%d]:- ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		printf("%d\n",a[i]);
	}
	printf("Length of Array %d",n);
}
