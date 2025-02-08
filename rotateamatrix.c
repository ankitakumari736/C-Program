#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n;
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
	for(i=0;i<n;i++){
		swap(&transpose[i][0],&transpose[i][n-1]);		
		}
		
	printf("Rotated matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",transpose[i][j]);
		}
		printf("\n");
	}
}