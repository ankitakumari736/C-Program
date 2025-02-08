#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the size of matrix:\n");
	scanf("%d",&n);
	int arr[n][n];
	printf("Enter the elements of the matrix:\n");
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	int transpose[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			transpose[j][i]=arr[i][j];
		}
	}
	printf("Transposed matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",transpose[i][j]);
		}
		printf("\n");
	}
}