/*
Q.3 Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.
For example,
Input:
Enter array size: 5

Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2

Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 1
b[3] = 7
b[4] = 3
*/

#include<stdio.h>

void main(){
	int a[10],b[10],c[20];
	int n,i;
	
	printf("Enter value ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Enter value A: ");
		scanf("%d",&a[i]);	
	}
	for(i=0; i<n; i++){
		printf("Enter value B: ");
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++){
		c[i]=a[i]+b[i];
	}
	for(i=0; i<n; i++){
		printf("%d",c[i]);
	}
}

